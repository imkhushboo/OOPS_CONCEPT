#include<bits/stdc++.h>
using namespace std;

class Car
{
    public:
    void horn()
    {
        cout<<"horn!!\n";
    }


};

class Truck
{

    public:
    void load()
    {
        cout<<"you can carry loads!!\n";
    }
    
};

class Train:public Car,public Truck{

    public:
    void wheels()
    {
        cout<<"Mine wheels are bigger\n";
    }

   
};
int main()
{
    Train t1;
    t1.wheels();
    t1.horn();
    t1.load();

}