#include <iostream>
using namespace std;
inline float cube(float a)
{
    return (6*a*a);
}
inline int square(int side)
{
    return (side*side);
}
inline int rectangle(int l,int b)
{
    return (l*b*0.5);
}

int main()
{
    float a;
    int side;
    int length,breadth;
    cout << "enter a and side and length and breadth\n";
    cin>>a>>side>>length>>breadth;
    cout<<"\n area of cube="<<cube(a);
    cout<<"\n area of square="<<square(side);
    cout<<"\n area of rectangle="<<rectangle(length, breadth);
    return 0;
}

