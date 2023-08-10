//single inheritance in which child class is inherited by parent class
#include<bits/stdc++.h>
using namespace std;

class parent{
    public:

    parent(){
        cout<<"Parent class"<<endl;
    }
};

class child1 : public parent{
    public:
    
    child1(){
        cout<<"child class";
    }
};

int main()
{
    child1 obj1;
    //execution of statements when child class is called :
    //O/P:-parent class
    //     child class 
//first parent class will be called as child is inheriting from it and then child class is called
}