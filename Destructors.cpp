#include<iostream>
using namespace std;

class alpha
{
    static int counting;
    public:
    alpha()//Constructor
    {
        counting++;
        cout<<"No of object created is "<<counting<<endl;
    }
    ~alpha()//Destructor
    {
        cout<<" No of object destroyed"<<counting<<endl;
        counting--;
    }

};
int alpha::counting;

int main()
{
    cout<<"Lets start Constructor "<<endl;
    alpha a1,a2,a3,a4,a5;
    //Now we are gonna introduce a new thing of Blocks
    {
        cout<<"Entering Block 1"<<endl;
        alpha a5;
    }
    //In Blocks First of all constructors applies to objects and then destructor applies to destructor  and then we move out out of block
    {
        cout<<"Entering bloxk 2"<<endl;
        alpha a6;
    }
    cout <<"Re-entering main"<<endl;
    //destructor will apply to 5 intial obejcts
    return 0;
}




    