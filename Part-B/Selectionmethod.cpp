#include<iostream>
using namespace std;
void swap(int *xp, int *yp)
{
    int temp=*xp;
         *xp=*yp;
         *yp=temp;
}
void selectionsort(int arr[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
        if(arr[j]<arr[min_idx])
        {
        min_idx=j;
        }
        }
    swap(&arr[i],&arr[min_idx]);
    }
}
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
int i,n,arr[10];
cout<<"Enter the size of array"<<endl;
cin>>n;
cout<<"Enter the array elements one by one"<<endl;
for(i=0;i<n;i++)
{
    cin>>arr[i];
}

selectionsort(arr,n);
cout<<"sorted array elements are:\n";
printarray(arr,n);
return 0;
}
