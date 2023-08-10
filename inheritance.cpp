#include<bits/stdc++.h>
using namespace std;
class Vehicle{
    public:
    int tyre_size;
    int capacity;
};

//child 1
class car : public Vehicle{
    public:
    string company;
};

//child 2
class truck : public Vehicle{
}; 

//child 3
class bus: public Vehicle{
    public:
    string state;
    string type;
};
int main()
{
    car obj1;
    //car object is having all three properties(2 inherited from parent class and 1 declared in its own)
    obj1.capacity=555;
    obj1.company="Mahindra";
    obj1.tyre_size=17;

    truck obj2;
    //truck object will have only inherited properties from parent class
    obj2.capacity=888;
    obj2.tyre_size=23;

    bus obj3;
    //bus object will have 4 properties(2 from parent and 2 declared in its own)
    obj3.capacity=777;
    obj3.state="MP";
    obj3.type="School Bus";
    obj3.tyre_size=21;

    
}