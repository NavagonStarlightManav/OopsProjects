#include<iostream>
using namespace std;

 class operators
 {
  int value1;
  int value2;
  public:
  void getvalues();
  friend int sum(operators);
 }m,n;
 void operators::getvalues()
 {
  cout<<"Pls enter value1"<<endl;
  cin>>value1;
  cout<<"Pls enter value2"<<endl;
  cin>>value2;

 }
 int sum(operators op)
 { 
   //Lets pass pointer 'px' to data member value1 for whole class not just one object
   int operators::*px=&operators::value1;
   //Lets pass pointer 'py' to data member value2 for whole class not just one object
   int operators::*py=&operators::value2;
  
   //Lets pass pointer 'pm' to object but only inside this function
   operators*pm=&op;

   //We are calling value1 through pointer to member and value2 from pointer to object and pointer to member
   int s=op.*px+pm->*py;
   return s;
   
 }

 int main()
 { //lets pass pointer to function for whole class not just one object
   void(operators::*pf)()=&operators::getvalues;

   (m.*pf)();//Just similar to m.getvalues . (m.*pf)(); when object is calling function's pointer
   
   cout<<"Sum="<<sum(m)<<endl;

   operators*op=&n;

   (op->*pf)(); // when pointer of object is calling function's pointer.

   cout<<"Sum="<<sum(n)<<endl;
   return 0;
 }

   







  




