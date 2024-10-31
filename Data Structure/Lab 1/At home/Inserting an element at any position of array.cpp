#include<iostream>
using namespace std;
int main()
{
    int n,i,pos,num;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the number of position to insert: ";
    cin>>pos;
    cout<<"Enter number to insert: ";
    cin>>num;
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
    for(i=n;i>=pos;i--)
    {
        a[i] = a[i-1];
    }
        a[pos-1] = num;
        n++;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"   ";

    }
    }
}
