#include<iostream>
#include<fstream>
#include<string.h>
#include<iomanip>

using namespace std;

int main()
{   int i,j;
    const char* file="Binary";
    float arr[4];
    cout<<"Pls enter arr values "<<endl;
    for(i=0;i<4;i++)
    {
        cin>>arr[i];

    }
    ofstream file1;
    file1.open("file.txt");

    file1.write((char*) &arr,sizeof(arr));
    file1.close();

    ifstream file2;
    file2.open("file.txt");
    file2.read((char*) &arr,sizeof(arr));

    for (i=0;i<4;i++)
    {
        cout.setf(ios::showpoint);
        cout<<setw(10)<<setprecision(2)<<arr[i];
    }
    file2.close();

    return 0;


}
