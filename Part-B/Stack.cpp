#include<iostream>
using namespace std;
int n=5,top=-1,s[10],ele;
class stackop
 {
     public: void push()
     {
      if(top>=n-1)
     {
         cout<<"stack is overflow\n";
     }
     else
     {
         cout<<"\n enter the element\n";
         cin>>ele;
         top++;
         s[top]=ele;
     }
     }
        public: void pop()
     {
     if(top==-1)
     {
         cout<<"stack is underflow\n";
     }
     else
     {
         cout<<"delete element is\n"<<s[top];
         top--;
     }
     }


     public: void display()
     {
     if(top==-1)
     {
         cout<<"\n stack is underflow\n";
     }
     else
       {
             cout<<"\n stack elements are\n";
             for(int i=top;i>=0;i--)
             {
                 cout<<s[i];
                 cout<<endl;
             }

         }
     }
};

 int main()
 {
     int ch,y=1;
     stackop obj;
     while(y)
     {
         cout<<"\nbasic stack operations are:\n";
         cout<<"\n1.PUSH";
cout<<"\n2.POP";
cout<<"\n3.DISPLAY";
cout<<"\n enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:obj.push();
break;
case 2:obj.pop();
break;
case 3:obj.display();
break;
default: cout<<"invalid choice\n";
}
cout<<"do you want to continue press[1] or [0] exit\n";
cin>>y;
}
}
