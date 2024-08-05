#include<iostream>
using namespace std;

class worker
{
    
    public:
    int age;
    char name[20];
    protected:
    void get();
    void show();
    private:
    int Salary;//Only a member function can access this ,noone else can access it 
};
void worker::get()
{
    cout<<"Pls enter your name and age"<<endl;
    cin>>name>>age;
}
void worker ::show()
{
    cout<<"Name and age is "<<name<<" "<<age<<endl;
}
//Class Worker Is fully defined now. This is the God class

class manager : public worker
{
  int now;
  public:
  void getdata();
  void showdata();
/*The data that was Inherited  from God/base/parent class is now also public in it . Means That in further class that wil 
derive from this derived1/manager class can have the God/Parentest/uppermost class.But Data just defined in 
derived1/manager is still as per initial conventions of Public/Protected/Private  .
*/
};

void manager::getdata()
{
  worker::get();
  cout<<"Number of workers under "<<name<<" are "<<endl;
  cin>>now;
}

void manager::showdata()
{
    worker::show();
    cout<<" No of workers under "<<name<<" are "<<now<<endl;

}

int main()
{
    manager m1;
    m1.getdata();
    m1.showdata();

    return 0;
}