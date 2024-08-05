#include<iostream>
#include<fstream>

using namespace std;

template <typename T, typename U>
class weight
{
 T kg;
 U grams;

 public:
 void setdata(T x,U y)
 {
    kg=x;
    grams=y;
 }
void getgramdata()
{
    cout<<"Pls enter gram data"<<endl;
    cin>>grams;
}
void getkgdata()
 {
    cout<<"Pls enter kgs"<<endl;
    cin>>kg;
 }
 void display()
 {
    cout<<"The weight is "<<kg<<" kg and "<<grams<<" grams"<<endl;

 }

};

int main()
{
    weight<int,float>obj1;
    obj1.setdata(5,6.45);
    obj1.display();

    weight<int,int>obj2;
    obj2.getkgdata();
    obj2.getgramdata();
    obj2.display();

return 0;



}