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
    virtual void display()
    {
        cout<<"Value in base class is "<<i<<endl;
    }
};

class derived : public base
{ 
public:
    int j;
    derived(int a, int b) : base(a)
    //The line derived(int a, int b) : base(a) is a constructor initializer list. 
    //In C++, when you create an object of a derived class, the base class constructor is 
    // automatically called. By using the constructor initializer list, you can specify 
    //which constructor of the base class should be called and with what arguments.
    { 
        j=b;
    }
    virtual void display()
    {
        cout<<"The derived class one base "<<i<<" and derived has "<<j<<endl;
    }
};

void somefunc(base obj)
{
    obj.display();
}

int main()
{
    base b(56);
    derived d(36,86);
    //common sense that derived class has one variable of parent class and one it's own
    //Common sense Object d has one value from base and other from derived class
    d.display();

    somefunc(b);
    somefunc(d);//Automatic Object slicing ,member j of object d is sliced off


    return 0;
}
