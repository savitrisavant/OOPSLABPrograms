#include <iostream>
#include<math.h>
using namespace std;
class quad
{
    public:float a,b,c,r1,r2,d;
    public:void read();
           void compute();
};
void quad::read()
{
    cout<<"enter the value of a,b,c to be greater than 0\n";
    cin>>a>>b>>c;
}
void quad::compute()
{
    d=0;
    d=b*b-4*a*c;
    if(d<0)
    {
        r1=-b/2*a;
        r2=sqrt(-d)/2*a;
        cout<<"roots are complex and different";
        cout<<r1<<"+i"<<r2;
        cout<<r1<<"-i"<<r2;
    }

    else if(d==0)
    {
        r1=-b/2*a;
        r2=-b/2*a;

cout<<"roots are real and equal";
cout<<"root1="<<r1;
cout<<"root2="<<r2;
}
    else if(d>0)
    {
        r1=-b+sqrt(d)/2*a;
        r1=-b-sqrt(d)/2*a;
        cout<<"roots are real and different";
        cout<<"root1="<<r1;
        cout<<"root2="<<r2;
    }
}
int main()
{
    quad q;
    q.read();
    q.compute();
    return 0;
}

