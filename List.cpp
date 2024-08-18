#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>
#include <list>

using namespace std;

void display(list<int> listy)
{
    list<int>::iterator iter;
    for (iter = listy.begin(); iter != listy.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1;

    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);
    //Removing elements from list 
    //list1.pop_front();
    //list1.pop_back();
    //list1.remove(1);

    list1.sort();
    display(list1);

    list<int> list2(3);

    list<int>::iterator iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 27;
    iter++;

    list1.merge(list2);
    display(list2);
    cout<<" List after merging "<<endl;
    display(list1);

    return 0;
}