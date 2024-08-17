#include<iostream>
#include<algorithm>
#include<bitset>
#include<vector>
using namespace std;

void display_vector(vector<int> &vec)
{
    int i;
    for (i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}

int main()
{
    vector<int> vector1;
    int i,element,size;
    cout <<" Please enter size of collection "<<endl;
    cin>>size;

    cout<<" Please enter input elements in the vector " <<endl;
    for(i=0;i<size;i++)
    {
        
        cin>>element;
        vector1.push_back(element);
        
    }
    cout<<endl;
    vector1.pop_back();
    display_vector(vector1);
    return 0;
}