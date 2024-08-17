#include<iostream>
#include<algorithm>
#include<bitset>
#include<vector>
using namespace std;

template <class T>

void display_vector(vector<T> &vec)
{
    int i;
    cout<<"Dislaying vector " <<endl;
    for (i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
}

int main()
{   //Ways to create a Vetor
    vector<int> vector1; //Zero Length Vector 
    vector<char> vector2(4); // 4 element character vector 
    vector2.push_back('5');
    vector<char> vector3(vector2); // 4 element double vector
    vector<int> vector4(6,3);

    display_vector(vector2);
    display_vector(vector3);
    display_vector(vector4);





    
}