#include<bits/stdc++.h>
using namespace std;

class Hero
{
    //private member
    int health=0;
    //public member
    public:
    int rank=4;
};

int main()
{
    Hero h1;
    // cout<<"lopppppppppp";
    // h1.health=1;  give error because private members cant be access
    cout<<h1.rank<<"\n"; //run successfully

    
}