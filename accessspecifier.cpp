//access specifiers and child class concept

#include<bits/stdc++.h>
using namespace std;
class parent{
    public:
    int x; //can be accessed anywhere directly

    private:
    int y;  //can be accesed only in this class

    protected:
    int z;  //can be accessed in this class,parent class and its child class
};

//making child class of "parent"

//publicly inheriting all the properties(access to data members will be same as its parent class)
class child_1 : public parent{
    protected :
    int a;
    //x will remain public
    //y will be inaccessible as it is private
    //z will remain protected
};

//privately inheriting all the properties(access to data members will change to private )
class child_2 : private parent{
    //x will become private
    //y will be inacccessible as it is private
    //z will become private
};

//protected inheriting all the properties(access to data members will change to protected)
class child_3 : protected parent{
    //x will become protected
    //y will be inaccessible as it is private
    //z will remain protected
};


