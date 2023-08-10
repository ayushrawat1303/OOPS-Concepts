//heirarchial class as two child classes are calling same parent class
#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"Parent class"<<endl;
    }
};

class child1:public parent{
    public:
    child1(){
        cout<<"Child_1 class"<<endl;
    }
};
class child2:public parent{
    public:
    child2(){
        cout<<"Child_2 class"<<endl;
    }
};
int main()
{
    child1 obj1;
    child2 obj2;

//op: Parent class
//    child_1 class
//    Parent class 
//    child_2 class
//child1 class is also calling parent class and child2 is also calling parent class
}