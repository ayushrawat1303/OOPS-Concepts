#include<bits/stdc++.h>
using namespace std;
class ABC{
    int x;
    public:
    void set(int data)
    {
        x=data;
    }
    int get()
    {
        return x;
    }
};
int main()
{
    ABC obj1;
//obj1 cannot directly access the hidden data members(variables) but can access using get and set
    obj1.set(2);
    cout<<obj1.get();
}