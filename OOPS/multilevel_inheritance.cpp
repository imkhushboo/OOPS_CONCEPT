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

class Asian:public Human{
      public:
      void race()
      {
        cout<<"i am an asian\n";
      }

};

class Female:public Asian{
      public:
      void gender()
      {
        cout<<"i am asian female\n";
      }
};


int main()
{
    Female khushboo;
    khushboo.legs=2;
    khushboo.hand=2;
    khushboo.speak();
    khushboo.gender();
    khushboo.race();
}