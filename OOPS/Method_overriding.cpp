#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:
    void speak()
    {
        cout<<"only speaking!!\n";
    }
};

class Dog:public Animal
{
    public:
    void speak()
    {
       cout<<"I am made for barking!!\n";
    }
};

int main()
{
    Dog d;
    d.speak();
};
