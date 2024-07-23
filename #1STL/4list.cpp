#include<bits/stdc++.h>
using namespace std;

/*List -->a)Non-contiguous memory allocation.
          b)As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time) 
          c)std::list is the class of the List container.
*/

int main(){

    //declaration
    list<int> ls = {20};


    //Inserting element
    ls.push_back(10); //{20 , 10}
    ls.emplace_back(30); //{20 , 10 , 30}


    //In list we can also have control over front
    ls.push_front(40); //{40 , 20 , 10 , 30}
    ls.emplace_front(5); //{5 , 40 , 20 , 10 , 30}
    ls.emplace_front(); //{0 , 5 , 40 , 20 , 10 , 30} -->If not passed any number then "0"


    //rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
    return 0;
}