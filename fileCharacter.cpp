#include<iostream>
#include<fstream>
#include<string.h>

using  namespace std;
int main()
{   
    int n,i;
    char ch;
    char name[80];
    cout<<"Enter a string "<<endl;
    cin.getline(name,80);
    n=strlen(name);

    fstream file;
    file.open("exp.txt",ios::in|ios::out);
    for(i=0;i<n;i++)
    {
        file.put(name[i]);
    }
    file.seekg(0);

    while(file)
    {
        file.get(ch);
        cout<<ch<<"\t";
    }
    return 0;
}

