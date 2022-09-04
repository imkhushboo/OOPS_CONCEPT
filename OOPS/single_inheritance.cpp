#include<bits/stdc++.h>
using namespace std;

class Human
{
   public:
   int hand;
   int legs;

   public:
   void speak()
   {
    cout<<"Human can speak!!\n";
   }


};

class Female:public Human{
      public:
      void gender()
      {
        cout<<"i am a badass girl!!\n";
      }
};


int main()
{
    Female khushboo;
    khushboo.legs=2;
    khushboo.hand=2;
    khushboo.speak();
    khushboo.gender();
}