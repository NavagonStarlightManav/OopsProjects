#include<iostream>
#include<string.h>
using namespace std;

class strings
{
  char *name;
  int length;
  public:
  strings(const char *s)
  { 
    length=strlen(s);
    name = new char[length+1];
    strcpy(name,s);

  }
  strings()
  {
    length=0;
    name = new char[length+1];
  }

  void show()
  {
    cout<<name<<endl;
  }

 operator char*()
  { char *str;
    str=name;
    return(str); 
  }
 

};


int main()
{
    const char *first="Manav";
    const char *second="Goyal";
    strings s1,s2;
    s1=strings(first);
    s2=second;
    s1.show();
    s2.show();
    char *j;
    j=s1.operator char *();
    cout <<"J is "<<j<<endl;

    return 0;
}



