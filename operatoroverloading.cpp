//operator overloading
#include<bits/stdc++.h>
using namespace std;
class Complex{
public:
    int real,img;

    Complex(int x,int y)
    {
        real=x;img=y;
    }
//when the object is defined in this manner this will be called
    Complex operator + (Complex &c)
    {
        Complex ans(0,0);
        ans.real=real + c.real;
        ans.img=img + c.img;
        return ans;
    }

    void print(){
        cout<<real << " + i"<<img<<endl;
    }
};
int main()
{
    Complex c1(2,3),c2(3,4);
    //                               c1                     c2
    //this expression will call-> Complex operator + (Complex &c)
    Complex c3= c1 + c2;
    c3.print();
}