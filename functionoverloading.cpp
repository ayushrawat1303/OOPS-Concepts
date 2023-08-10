//compile time polymorphism ->function overloading(area function is defined multiple times for differnet data type or different arguments)
#include<bits/stdc++.h>
using namespace std;
class Shape{
    public:
    int area(int len,int breadth)
    {
        return len*breadth;
    }
    int area(int r)
    {
        return acos(-1)*r*r;
    }
    float area(float s)
    {
        return s*s;
    }
};
int main()
{
    Shape rectangle;
    cout<<rectangle.area(5,2)<<endl;

    Shape circle;
    cout<<circle.area(4)<<endl;

    Shape square;
    cout<<square.area((float)2.22);
}
