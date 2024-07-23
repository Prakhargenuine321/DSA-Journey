#include<bits/stdc++.h>
using namespace std;

//MULTI-MAP -->Everything same as map only difference is that it can also store "duplicate keys".
//No use of map[key].

int main(){


    //declaration
    multimap<int , int> mpp;


    //INSERTION
    mpp.insert({1 , 2});
    mpp.emplace(2 , 3);
    mpp.emplace(2 , 5);


    //Traversing
    //#Method 1 --> The key-value pairs in a map are std::pair<const Key, T> where Key is the type of the keys and T is the type of the mapped values. Since the keys in a map are const, attempting to modify them directly through the iterator it would result in a compilation error. Using const auto& ensures that you're working with a reference to the key-value pair, preserving the constness of the keys.
    for(const auto &it : mpp){
        cout << it.first << "-> " << it.second << endl;
    }

    //#Method 2
    for (auto it = mpp.begin(); it != mpp.end(); ++it) {
        std::cout << it->first << " : " << it->second << std::endl;
    }


    return 0;
}