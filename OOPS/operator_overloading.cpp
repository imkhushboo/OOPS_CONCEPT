#include<bits/stdc++.h>
using namespace std;


class A
{
   int a;
   public:
   A(int x)
   {
    this->a=x;
   }
   void operator* (A& obj)
   {
    cout<<this->a-obj.a<<"\n";
   }
};

int main()
{
    A val1(2);
    A val2(3);
    val1 * val2;

}
