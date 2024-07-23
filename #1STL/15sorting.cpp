#include<bits/stdc++.h>
using namespace std;

  //Writing our own comperator "comp"
    bool comp(pair<int , int> p1 , pair<int , int> p2){
        if(p1.second < p2.second){
            return true;
        }
        if(p1.second > p2.second){
            return false;
        }
        if(p1.first > p2.first){
            return true;
        }
        else{
            return false;
        }

    }

int main(){

    vector<int> vec = {1 , 3 , 10 , 9 , 4 , 12};

    //Sorting in Ascending
    sort(vec.begin() , vec.end());
    for(auto it : vec){
        cout << it << " ";
    }
    cout << endl;


    //Range Sorting
    vector<int> vecOne = {1 , 3 , 10 , 9 , 4 , 12};
    sort(vecOne.begin()+2 , vecOne.begin() + 4);
    for(auto it : vecOne){
        cout << it << " ";
    }
    cout << endl;


    //Sorting in Descending
    sort(vecOne.begin() , vecOne.end() , greater<int>());  //The issue here is with how you're passing the "greater<int>" functor to the sort function. "greater<int>" is a template class, not a function. You need to create an instance of "greater<int>" and pass it as an argument.So use "greater<int>()".
    for(auto it : vecOne){
        cout << it <<" ";
    }
    cout << endl;


    //Sort according to the way we want
    //Here we will create our own comparator as we have used "greater<int>" as it is also an comparator
    pair<int , int> numSort[] = {{1 , 2} , {2 , 1} , {4 , 1}};

    //Task-->// sort it according to second element
             // if second element is same, then sort
             // it according to first element but in descending
    
    sort(numSort , numSort + 3 , comp);
    for(auto it : numSort){
        cout << it.first <<"->"<<it.second << endl;
    }

    return 0;
}

//Checkout following if you don't understand each iteration
// Comparator Function (comp) Iterations:

// The comp function is called multiple times during the sorting process to compare pairs of elements in the array. Here's how it works for each comparison:
// Comparison 1: Consider comparing {1, 2} with {2, 1}.
// p1.second (2) is greater than p2.second (1).
// According to comp, this returns false, indicating {2, 1} should come before {1, 2}.
// Comparison 2: Consider comparing {2, 1} with {4, 1}.
// p1.second (1) is equal to p2.second (1).
// Since the second elements are equal, comp checks the first elements. p1.first (2) is greater than p2.first (4).
// However, comp sorts in descending order for equal second elements, so it returns false, indicating {4, 1} should come before {2, 1}.
// Comparison 3: This might involve comparing the remaining elements after the first two comparisons are complete. The specific comparison here depends on the order established in the previous steps.