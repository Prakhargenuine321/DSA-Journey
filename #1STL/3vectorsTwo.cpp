#include<bits/stdc++.h>
using namespace std;

int main(){

    //ERASE(delete) in vetors.
    vector<int> vec = {10 , 20 , 30 , 40 , 50};

    vec.erase(vec.begin()+1);//deleting only single element
    for(auto it : vec){
        cout << it << " ";
    }
    cout << endl;

    vector<int> vecOne = {10 , 20 , 30 , 40 , 50};//range deleting: [start , end)-->end is excluded
    vecOne.erase(vecOne.begin()+1 , vecOne.begin()+4);
    // for(auto it : vecOne){
    //     cout << it << " ";
    // }
    // cout << endl;


    //INSERT
    vector<int> vecTwo = {10 , 20 , 30 , 40 , 50};
    vecTwo.insert(vecTwo.begin()+1,15); //{10 , 15 , 20 , 30 , 40 , 50}
    vecTwo.insert(vecTwo.begin()+3 , 2 , 25); //{10 , 15 , 20 , 25 , 25 , 30 , 40 , 50}
    // for(auto it : vecTwo){
    //     cout << it << " ";
    // }
    // cout << endl;


    //copying 
    vector<int> copy(2,50); //{50 , 50}
    vecTwo.insert(vecTwo.begin() , copy.begin() , copy.end()); //{50 , 50 , 10 , 15 , 20 , 25 , 25 , 30 , 40 , 50}


    //size of an vector
    // cout << vecTwo.size() << endl;


    //Popping an element 
    vector<int> popUp = {10 , 20 , 30 , 40};
    popUp.pop_back(); //{10 , 20 , 30}
    

    //Swapping elements of two vectors together
    vector<int> swapV1 = {10 , 20 , 50};
    vector<int> swapV2 = {30 , 40};
    swapV1.swap(swapV2); //swapV1 = {30 , 40} & swapV2 = {10 , 20 , 50}

    
    //Erasing entire vector of any how size
    vector<int> clearThis(5 , 30); //{30 , 30 , 30 , 30 , 30}
    clearThis.clear();

    //Checking whether vector is empty or not
    // cout << clearThis.empty();
    // cout << endl;

    //lower_bound function -->Returns immediate greatest value or equal value , for this elements in sorted order and if not in sorted than it will have undefined behaviour.
    vector<int> lowerBo = {1 , 2 , 3 , 4 , 6}; //also try to run this to see undefined behaviour {1 , 2 , 3 , 4 , 6 , 2}
    auto it = lower_bound(lowerBo.begin() , lowerBo.end() , 5);
    // cout << *(it) << endl;


    //Returning index of lower_bound_function
    auto index = lower_bound(lowerBo.begin() , lowerBo.end() , 5) - lowerBo.begin();
    // cout << "Index is:" << index << endl;


    //upper_bound function --> Find the iterator pointing to the first element in a sorted range that is greater than a specified value.
    //Here no concept of equality.
    vector<int> upperBo = {1 , 2 , 3 , 4 , 6};
    auto itad = upper_bound(upperBo.begin() , upperBo.end() , 5);
    // cout << *(itad) << endl;


    //Returning index of uppper_bound_function
    auto index2 = upper_bound(upperBo.begin() , upperBo.end() , 5) - upperBo.begin();
    // cout << "Index is:" << index2 << endl;s

    return 0;
}