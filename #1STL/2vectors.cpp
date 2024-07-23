#include<bits/stdc++.h>
using namespace std;

//Vector --> It is an container which is same as an array but dynamic in nature.
//Header file --> <vector>

int main(){

    //declaration
    vector<int> v;

    //emplace_back is faster than push_back
    v.push_back(10); 
    v.emplace_back(20);


    //using "pair" datatype
    vector<pair<int , int>> con;
    con.push_back({1,2}); //need to pass using braces
    con.emplace_back(1,2); //no need to use braces as it assumes it to be pair
    // for(auto it : con){
    //     cout << it.first << " " << it.second<< endl;
    // }

    vector<int> vec(5,100); //5 instances of 100 as, {100 , 100 , 100 , 100 , 100}
    vector<int> vecOne(vec); //another vector of 5 instances of 100 but copy of "vec" so change in "vecOne" will not affect "vec".
    vector<int> vecTwo(5); //5 instanes of 0 or garbage value as it depends upon compiler(here it is '0').


    //using "iterator"
    vector<int> vecThree = {10 , 20 , 30 , 40 , 50};
    vector<int>::iterator it = vecThree.begin(); //"it" will point to the address of the start of "vecThree"
    //here are some of the iterators: 1).end()-->point after the last element in the vector ,2).rend()-->point to reverse of vector's after last element ,3.rbegin()-->point to reverse of vector's first element 
    
    it++; //incrementing the address
    // cout << *(it) << endl; //20
    // cout << vecThree[0] <<" "<<vecThree.at(3) << endl; //10 40
    // cout << vecThree.back() << endl; //it will print the last element of an vector.

    //printing an vector
    //#Method 1 -->it is too long method.
    for (vector<int>::iterator it = vecThree.begin(); it != vecThree.end(); it++){
        // cout << *(it) << " ";
    }
    cout << endl;

    //#Method 2 -->Using "auto" compiler will automatically recognize the datatype.
    for (auto it = vecThree.begin(); it != vecThree.end(); it++) {
        // cout << *(it) << " ";
    }
    cout << endl;
    
    //#Method 3-->Using "range-based" iterators.
    for(auto it : vecThree){
        // cout << it << " "; 
    }
    cout << endl;
    

    return 0;
}