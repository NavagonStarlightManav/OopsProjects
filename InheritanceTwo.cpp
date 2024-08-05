#include<iostream>
using namespace std;

class worker
{   private:
    int age;
    char name[20];
    
    public:
    void get();
    void show();
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

class manager : private worker
{
  int now;
  public:
  void getdata();
  void showdata();
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