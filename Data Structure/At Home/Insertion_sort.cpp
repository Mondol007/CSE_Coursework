
#include<iostream>
using namespace std;

int main()
{
    int i,n,j,item;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i<<": ";
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        item = a[i];
        for(j=i-1;j>=0&&a[j]>item;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=item;
    }
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<"\t";
    }
}
