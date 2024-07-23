#include <iostream>
using namespace std;

// Bubble Sort-->Push the max to the last by adjacent swaps.
// To know about adjacent swaps refer--> D:\DSA\Notes Regarding DSA\#12BubbleSort(AdjacentSwapping).png

int main()
{

    int arr[] = {20, 12, 14, 2, 7, 11, 11, 11, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int didSwap = 0; //This is optimization of code to get best TC of O(N) as worst and avg. is O(N^2) and it is achieved if array is already sorted.{1 , 2 , 3 , 70 , 80}
        for (int j = 0; j <= n - i - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap++;
            }
        }
        if (didSwap == 0) //This also part of optimization as if after "first-iteration" if there is no swap then loop will be break-out.
        {
            break;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}

// Another solution
// void bubble_sort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }