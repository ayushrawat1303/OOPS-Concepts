#include<bits/stdc++.h>
using namespace std;
class ABC{
    //variables are by default private 

    int a;
    int b;

    public:
    int solve(int data)
    {
        a=data;
        b=a/2;
        return b;
    }
};
int main()
{
    ABC obj1;
    //by this the object obj1 cannot directly access the varaibles of the class but can use it through the function
    cout<<obj1.solve(10);
    
}