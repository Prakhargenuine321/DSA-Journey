#include<bits/stdc++.h>
using namespace std;

int main(){

    //#1)
    //Taking all possible "PERMUTATIONS" of an string but *given string should be in sorted order to get all possible strings.
    //If string is not sorted then first sort it than take out permutation
    string str = "123";
    
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin() , str.end()));
    

    //If given in unsorted form
    string strOne = "acb";
    //-->First sort and then permutate
    sort(strOne.begin() , strOne.end()); //-->Comment this and check it out
    //Now permutate
    do
    {
        cout << strOne << endl;
    } while (next_permutation(strOne.begin() , strOne.end()));


    //#2
    //Maximum and Minimum from an given array
    vector<int> vec = {1 , 2 , 4 , 6 , 8 , 20};
    int maxi = *max_element(vec.begin() , vec.end()); //It will return an address of an maximum element but we have to use pointer to get that value
    cout << maxi << endl;


    int mini = *min_element(vec.begin() , vec.end());
    cout << mini << endl;

    
    return 0;
}