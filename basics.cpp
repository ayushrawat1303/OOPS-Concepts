#include<bits/stdc++.h>
using namespace std;
class fruit{
    public:
    string name;
    string color;
    // get_price();
};
int main()
{
    //1st way of declaring object
    fruit apple,guava;
    apple.name="Apple";
    apple.color="red";
    guava.name="Guava";
    guava.color="green";
    cout<<apple.name;

    cout<<endl;
    
    //2nd way of declaring object
    fruit* watermelon= new fruit();
    watermelon->color="Green";
    watermelon->name="watermelon";
    cout<<watermelon->name;

}