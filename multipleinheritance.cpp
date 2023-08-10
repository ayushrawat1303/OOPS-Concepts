//multiple inheritance as one class is inheritng from two classes 
#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    A(){
        cout<<"A class"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"B class"<<endl;
    }
};
class C : public A,public B{
    public:
    C(){
        cout<<"C class";
    }
};
int main()
{
    C obj1;
    //o/p: A class
    //     B class
    //     C class
// class "C" is inheriting both classes "A" and "B"
//first "A" is inherited and then "B" is inherited , accordingly the execution
}