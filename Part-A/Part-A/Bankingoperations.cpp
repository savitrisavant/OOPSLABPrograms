#include<iostream>
using namespace std;
class Banking
{
 private:
  string name;
  int account_number;
  float balance;
  float amount;
 public:
  Banking(string n, int a, float b)
{
    name=n;
    account_number=a;
    balance=b;
    cout<<"\nthe name is:"<<name;
    cout<<"\naccount number is:"<<account_number;
    cout<<"\naccount created for:"<<name<<endl;
}

 void deposit()
{
  cout<<"\n enter the amount to be deposited:";
  cin>>amount;
  balance+=amount;
  cout<<"\namount has been deposited. the new balance is:"<<balance<<endl;
}
 void withdraw()
{
  cout<<"\nenter the amount to be withdrawn:";
  cin>>amount;
 if(balance>=amount)
{
  balance-=amount;
  cout<<"\namount withdrawn. the new balance is:"<<balance<<endl;
 }
 else
 {
  cout<<"\ninsufficient balance:";
 }
 }
 ~Banking()
{
 cout<<"Banking operation terminated:";
}
 };
int main()
{
 Banking b("Tom Holland",123456,1200.45);
 b.deposit();
 b.withdraw();
 return 0;
}

