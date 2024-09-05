#include<bits/stdc++.h>
using namespace std;

//Here we will discuss differences between "struct" and "class".

//*For both "struct" and "class" you need to use "CapitalCamelCase" convention.


//1)Struct-
//a)Members are public by default.
//b)Traditionally used for simple data structures (like a collection of variables).
//c)Use for simple data storage when no strict encapsulation is needed.
//d)Suitable for simple data grouping.

struct Person{
    int age;
    string name;


    //#1)can take data like this when you have constructor

    // Person(int a , string n){ 
    //     age = a;
    //     name = n;
    // }

    void display(){
        cout << "Name: " << name << " " << "Age: " << age << endl;
    }
    
};


//class-
//a)Members are private by default.
//b)Typically used for more complex objects with behavior (methods) and data encapsulation.
//c)Use for creating objects that need data hiding and controlled access through public methods.
//d)Best for encapsulation and complex object behavior.


class PersonOne{

    int age;
    string name;

    //as we know that by-deafult it has private members so 2 options hain:-
    //1)variables ko private kar do to access members and set value from out of "class" scope.
    //2)create "constructor" to get value but it should be public.

    public:
    PersonOne(int a, string n){
        age = a;
        name = n;
    }

    void display(){
        cout << "Name: " << name << " " << "Age: " << age << endl;
    }
};

int main(){

    //#1)Method1
    // Person p1 = Person(22 , "Prakhar");
    
    //#2)Method2

    //a)pointer type declaration pointing towards new created object inside heap.
    Person* p1 = new Person();
    p1->age = 22;
    p1->name = "Prakhar Patel";
    
    p1->display();

    //b)object type declaration.
    Person p2;
    p2.age = 23;
    p2.name = "Nimbu";
    p2.display();


    // <----------CLASSES--------->
    PersonOne pOne(22 , "Doremon");
    pOne.display();

    PersonOne* pTwo = new PersonOne(22 , "Jiyan");
    pTwo->display();
    return 0;
}