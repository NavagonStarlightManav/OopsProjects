#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>
using namespace std;

void display_vector(vector<int> &vec)
{
    int i;
    for (i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
        cout << vec.at(i)<<endl;
    }
}

int main()
{
    vector<int> vector1;
    int i, element, size;
    cout << " Please enter size of collection " << endl;
    cin >> size;

    cout << " Please enter input elements in the vector " << endl;
    for (i = 0; i < size; i++)
    {

        cin >> element;
        vector1.push_back(element);
    }
    cout << endl;

    display_vector(vector1);
    cout << endl;

    vector<int>::iterator iter = vector1.begin();
    vector1.insert(iter+2, 2, 64);
    display_vector(vector1);
    return 0;
}