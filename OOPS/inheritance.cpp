#include<bits/stdc++.h>
using namespace std;


class Parent
{
    public:
    int a;
    protected:
    int b;
    private:
    int c;

};


class child1 :private Parent
{
     void func()
     {
        cout<<this->a<<"\n";
        cout<<this->b<<"\n";
        // cout<<this->c<<"\n";   not accessible
     }
};

class child2 :protected Parent
{
     void func()
     {
        cout<<this->a<<"\n";
        cout<<this->b<<"\n";
        // cout<<this->c<<"\n"; not accessible
     }
};
class child3 :public Parent
{
     void func()
     {
         cout<<this->a<<"\n";
        cout<<this->b<<"\n";
        // cout<<this->c<<"\n";   not accessible
     }
};

int main()
{
    child1 c;
    child2 c1;
    child3 c2;
    
    // cout<<c.a<<"\n"; //error
    // cout<<c1.a<<"\n"; //error
    cout<<c2.a<<"\n"; //only accesible

    return 0;
}