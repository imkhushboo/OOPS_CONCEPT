#include<bits/stdc++.h>
using namespace std;


class A
{
    public:
    virtual void func()
    {
        cout<<"Hey we are in A class\n";
    }
};

class B:public A{
    public:
    void func()
    {
        cout<<"Hey we are in B class\n";
    }
};
int main()
{
    A *obj= new B;
    obj->func(); //late binding
}