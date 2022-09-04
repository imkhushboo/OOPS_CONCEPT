// function overloading occur at compile time 
// signature of function of same name is different 

#include<bits/stdc++.h>
using namespace std;


class Universe
{
   public:
   void sayHello()
   {
    cout<<"I am the boring one!!\n";
   }

   void sayHello(string name)
   {
    cout<<"Hello you beautiful "<<name<<"\n";
   }

};

int main()
{
    Universe people;
    people.sayHello();
    people.sayHello("khushboo");
}