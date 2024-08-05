#include<iostream>
#include<string.h>
using namespace std;

int main()
{    int m,n;
     int i;
    const char* string1="C++";
    const char* string2="Programming";
    m=strlen(string1);
    n=strlen(string2);

    cout<<string1<<endl;

    for(i=0;i<n;i++)
    {
      cout.write(string2,i);
      cout<<"\n";
    }

    cout<<"\n\n";

     for(i=n;i>0;i--)
    {
      cout.write(string2,i);
      cout<<"\n";
    }

    cout.write(string1,10);

    return 0;


}