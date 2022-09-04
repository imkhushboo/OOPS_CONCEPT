#include<bits/stdc++.h>
using namespace std;

class A
{
   private:
   int a=4;

   public:
   friend void func(A);

};

void func(A t1)
{
    cout<<t1.a<<"\n";
}


int main()
{
    A x1;
    func(x1);

}