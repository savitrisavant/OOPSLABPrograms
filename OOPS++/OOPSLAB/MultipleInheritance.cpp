#include<iostream>
using namespace std;
class student
{
    protected:int rno,m1,m2,m3;
    public:void get()
    {
        cout<<"enter the Roll no:";
        cin>>rno;
        cout<<"enter the cpp marks:";
        cin>>m1;
        cout<<"enter the web marks:";
        cin>>m2;
        cout<<"enter the dms marks:";
        cin>>m3;
    }
};
class sports
{
    protected:int sum;
    public:
        void getsum()
        {
        cout<<"Enter the sports marks:";
        cin>>sum;
        }
};
class marks:public student,public sports
{
    int tot,avg;
    public:void display()
    {
        tot=(m1+m2+m3+sum);
        avg=tot/4;
        cout<<"\n roll no:"<<rno;
        cout<<"\n Total:"<<tot;
        cout<<"\n Average:"<<avg;
    }
};
int main()
{
    marks obj;
    obj.get();
    obj.getsum();
    obj.display();
    return 0;
}

