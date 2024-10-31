#include<iostream>
using namespace std;
int main()
{
    int n,i,pos;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the number of position to delete: ";
    cin>>pos;
    int a[n];
    if(pos<0 || pos>n)
    {
        cout<<"Invalid position"<<endl;
    }
    else
    {
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=pos-1;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
}
}
