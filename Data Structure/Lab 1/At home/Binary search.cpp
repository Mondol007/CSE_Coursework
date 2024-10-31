#include<iostream>
using namespace std;
int main()
{
    int n,i,x,left,right,j,temp=0,mid;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    left = 0;
    right = n-1;
    for(i=0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<"   "<<"\t";
    }
    cout<<"\n";
    cout<<"Enter the element to be searched: ";
    cin>>x;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(a[mid] == x)
        {
            cout<<"Item found!!!! It is in the position of "<<mid<<endl;
            break;
        }
        if(a[mid]<x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
}
