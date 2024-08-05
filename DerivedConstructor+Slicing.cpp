#include<iostream>
using namespace std;
class base
{    
public:
    int i;
    base()
    {
        i=0;
    }
    base(int a)
    {
        i=a;
    }
    virtual void display()=0;
};

class derived : public base
{ 
public:
    int j;
    derived(int a, int b) : base(a)
    { 
        j=b;
    }
    virtual void display()
    {
        cout<<"The derived class one base "<<i<<" and derived has "<<j<<endl;
    }
};

void somefunc(base& obj)
{
    obj.display();
}

int main()
{
    //base b(56); u cant create object of abstract class
    derived d(36,86);
    d.display();
    somefunc(d);

    return 0;
}
