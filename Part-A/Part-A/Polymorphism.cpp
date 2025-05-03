#include<iostream>
using namespace std;
class over
{
public:int add(int a)
{
return(a+a);
}
int add(int a,int b)
{
return(a+b);
}
int add(float a,int b,char c)
{
return(a+b+c);
}
};
int main()
{
over a;
cout<<"\n addition ="<<a.add(5);
cout<<"\n addition ="<<a.add(6,5);
cout<<"\n addition ="<<a.add(3.2,5,'c');
return 0;
}

