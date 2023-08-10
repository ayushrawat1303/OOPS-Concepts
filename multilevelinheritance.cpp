// multilevel inheritance where parent of child class is also inheriting from its parent class
#include<bits/stdc++.h>
using namespace std;

class parent{
    public:
    parent(){
        cout<<"Parent class"<<endl;
    }
};

class child : public parent{
    public:
    child(){
        cout<<"child class"<<endl;
    }
};

class grand_child: public child{
    public:
    grand_child(){
        cout<<"grand_child class";
    }
};
int main()
{
    grand_child obj1;
    //o/p:  Parent class
    //      child class
    //      grand_child class

//at first the child class will be called, child class will call parent class then execution will 
//start, after printing in parent it will go to child then it will go to grand_child
}
