#include<bits/stdc++.h>
using namespace std;


class Shape
{
  private:
  int height;
  int length;
  int breadth;
  public:
  //defautl constructor
  Shape()
  {
    cout<<"default construcctor\n";
  }
  //parametrized constructor
  Shape(int length,int breadth,int height)
  {
    this->length=length;
    this->breadth=breadth;
    this->height=height;

  }
  //copy contructor
  Shape(Shape & s)
  {
     this->length=s.length;
    this->breadth=s.breadth;
    this->height=s.height;

  }
  
  public:
  void print()
  {
    cout<<this->length<<" "<<this->breadth<<" "<<this->height<<"\n";
  }
   void setlength(int length)
   {
    this->length=length;
   }

   ~Shape()
   {
    cout<<"destructor called\n";
   }


};
int main()
{
    Shape cuboid1(2,3,4);
    Shape cuboid2;
    cuboid2=cuboid1;
    cuboid1.print();
    cuboid2.print();
    cuboid1.setlength(5);
    cuboid1.print();
    cuboid2.print();
}