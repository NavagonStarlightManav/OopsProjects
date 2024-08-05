#include<iostream>
using namespace std;

class time
{
  float hours;
  float minutes;

  public:
  void gettime();
  void puttime();
  void sumtime(time,time);


}T1,T2,T3;

void time::gettime()
{
  cout<<"Pls enter hours"<<endl;
  cin>>hours;
  cout<<"Pls enter minutes"<<endl;
  cin>>minutes;

}

void time::puttime()
{
  cout <<" hours are "<<hours<<endl;
  cout <<" minutes are "<<minutes<<endl;
}


void time::sumtime(time t5,time t6)
{
  cout << "Sum of hours is "<<t5.hours+t6.hours<<endl;
  cout << "Sum of minutes is "<<t5.minutes+t6.minutes<<endl;
  cout <<"Total time in hours"<<t5.hours+t6.hours+t5.minutes/60+t6.minutes/60<<endl;

}

int main()
{
  T1.gettime();
  T2.gettime();
  T1.puttime();
  T2.puttime();
  T3.sumtime(T1,T2);

  return 0;



}