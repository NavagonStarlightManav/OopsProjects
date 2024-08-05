#include<iostream>
#include<string.h>

using namespace std;


class strings
{
    char *name;
    int length;

    public:
    strings()
    {
        length=0;
        name = new char[length+1];

    }

    strings(const char *s)
    {
        length=strlen(s);
        name= new char[length+1];
        strcpy(name,s);
    }

    void display()
    {
        cout<<name<<endl;
    }
    void join(strings &a,strings &b)
    {
      length=a.length+b.length;
      delete name;
      name=new char[length+1];
      strcpy(name,a.name);
      strcat(name,b.name);
    }
};

int main()
{
    const char *first="Joseph";

    strings name1(first),name2("Karl"),name3("Max"),s1,s2;
    s1.join(name1,name2);
    s2.join(s1,name3);
    name1.display();
    name2.display();
    name3.display();
    s1.display();
    s2.display();

    return 0;
}