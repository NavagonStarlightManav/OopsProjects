#include<iostream>
#include<algorithm>
#include<bitset>
#include<vector>
#include<string>
#include<map>

using namespace std;
int main()
{  
    map<string,int> MarksMap;
    MarksMap["Manav"]=64;
    MarksMap["Nancy"]=56;
    MarksMap["Milly"]=15;
    MarksMap["Brown"]=24;

    MarksMap.insert({{"Jane",12},{"Steve",76}});

    map<string,int>::iterator iter;

    for (iter=MarksMap.begin();iter!=MarksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second;
        cout<<endl;
    }
    cout<<" map size is "<<MarksMap.size()<<endl;
    cout<<" Max possible map size is "<<MarksMap.max_size()<<endl;
    
    return 0;
}