#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  ifstream if1,if2;
  if1.open("File1.txt");
  if2.open("File2.txt");

  char name[120];
  char name1[120];
  while(if1)
  {
    if1.getline(name,120);
    cout<<name<<endl;
  }
  while(if2)
  {
    if2.getline(name1,120);
    cout<<name1<<endl;
  }
    

  return 0;
  
}