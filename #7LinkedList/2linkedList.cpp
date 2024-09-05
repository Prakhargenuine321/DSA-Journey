#include<bits/stdc++.h>
using namespace std;


//1)declaring our own dataType.
struct Node{
    public:

    int data;
    Node* next;

    public:

    //2)agar data aur next data ka address dono pass kiya gaya ho toh
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    //3)agar sirf data pass kiya gaya ho toh
    Node(int data1){ 
        data = data1;
        next = nullptr;
    }
};

int main(){

    //4)Now understanding key-difference(basis - how memory allocated and how to acceess them)
    //between following two types of declaration:-

    //a)Here memory is allocated in Stack as it is an local variable,
    //<memory apnae aap deallocate ho jayegi if it goes out of scope>
    //b)Hum isae access kar rahe hain using (.) operator as it is an object.

    // Node num = Node(10 , nullptr);
    // cout << num.data <<" " << num.next;


    //a)Here "num" is a pointer to a Node object.
    //b)So memory is allocated dynamically in "heap".
    //c)"num" is a pointer so deallocation of memory is done manually using "delete" to avoid leaks.
    //d)Using "->" arrow operator to access members as "num" is an pointer to the object.

    Node* num = new Node(10 , nullptr);
    cout << num->data << " " << num->next;

    return 0;
}