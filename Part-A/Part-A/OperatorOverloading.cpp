
#include<iostream>
using namespace std;
class Complex
{
    private:float real;
    float imag;
    public:Complex()
    {
        real=0;
        imag=0;
    }
    void read()
    {
        cout<<"\n Enter real and imaginary parts:\n";
        cin>>real>>imag;
    }
    Complex operator+(Complex c2)
    {
    Complex temp;
    temp.real=real+c2.real;
    temp.imag=imag+c2.imag;
    return temp;
    }
    Complex operator-(Complex c2)
    {
        Complex temp1;
        temp1.real=real-c2.real;
        temp1.imag=imag-c2.imag;
        return temp1;
    }
    void display()
    {
        cout<<real<<"+i"<<imag;
    }
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.read();
    c1.display();
    c2.read();
    c2.display();
    c3=c1+c2;
    c4=c1-c2;
    cout<<"\n Addition is=";
    c3.display();
    cout<<"\n Subtraction is=";
    c4.display();
    return 0;
}




