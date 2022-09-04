#include<bits/stdc++.h>
using namespace std;

class Base1
{
    public:
    void func()
    {
        cout<<"Base1 function\n";
    }

};


class Base2
{
    public:
    void func()
    {
        cout<<"Base2 function\n";
    }

};


class Derived:public Base1,public Base2
{

};

int main()
{
    Derived d;
    // will result in ambiguity
    // d.func();
    d.Base1::func();
    d.Base2::func();
}