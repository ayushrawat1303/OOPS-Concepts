#include<bits/stdc++.h>
using namespace std;
class rectangle{
    public:
    int len;
    int breadth;

    rectangle()  //->default constructor as no parameters passed
    {
        len=0;
        breadth=0;
    }

    rectangle(int x,int y) //->parameterized constructor as parameters passed
    {
        len=x;
        breadth=y;
    }

    rectangle(rectangle &r) //->copy constructor(when we want our object to have same values as some pre-existing object)
    {
        len=r.len;
        breadth=r.breadth;
    }
};

int main()
{
    rectangle r1;
    cout<<r1.len<<" "<<r1.breadth<<endl;

    rectangle r2(4,5);
    cout<<r2.len<<" "<<r2.breadth<<endl;

    rectangle r3(r2);
    cout<<r3.len<<" "<<r3.breadth<<endl;
}