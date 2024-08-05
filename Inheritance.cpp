#include<iostream>
using namespace std;
 class student
 {
    protected:
    int rollno;
    public:
    void getroll(int a)
    {
        rollno=a;
    }
    void putroll()
    {
        cout<<"Roll no is "<<rollno<<endl;
    }
 };

 class test:public student
 { protected:
   int part1,part2;
   public:
   void getpart(int x,int y)
   {
    part1=x;
    part2=y;
   }
   void putpart()
   {
    cout<<"Marks obtained "<<endl;
    cout<<"Part 1 is "<<part1<<endl;
    cout<<"Part 2 is "<<part2<<endl;
   }
 };

 class sports
 {
    protected:
    int score;
    public:
    void getscore(int s)
    {
        score=s;
    }
    void putscore()
    {
        cout<<"Sports wt :"<<score<<endl;
    }
    
 };

 class results:public test,public sports

 {
   int total;
   public:
   void display(void);
 };

 void results::display(void)
 {
   total=part1+part2+score;
   putroll();
   putpart();
   putscore();
   cout<<"Total score is "<<total<<endl;
 }
int main()
{
    results s1;
    s1.getroll(347);
    s1.getpart(30,35);
    s1.getscore(7);
    s1.display();

    return 0;
    }






