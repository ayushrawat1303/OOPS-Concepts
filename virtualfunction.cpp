//virtual function ->concept of late binding
#include<bits/stdc++.h>
using namespace std;

class parent{
public:
    virtual void func1(){
        cout<<"parent class";
    }
};

class child:public parent{
public:
    void func1(){
        cout<<"Child class";
    }
};

int main()
{
    parent *p;
    child obj;
    // obj.func1();
    p=&obj;
    p->func1();//we added virtual keyword in func1 because of which late binding is happening 
                //and child class is printed otherwise parent class would get printed
}