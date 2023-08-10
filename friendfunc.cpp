#include<bits/stdc++.h>
using namespace std;
class A{
    int x;

public:
    A(){
        x=10;
    }

//declaration of friend function
    friend void func(A &obj);

};
void func(A &obj)
{
    cout<<obj.x<<endl;
}
int main()
{
    A obj;
    // cout<<obj.x; ->using this we cannot access x as its private
    
    func(obj);//->using this we can access the private data members

}

