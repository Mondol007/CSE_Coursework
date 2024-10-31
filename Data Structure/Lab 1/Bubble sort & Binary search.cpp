#include<iostream>
using namespace std;
int main()
{
    int x,i,j,n,temp;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<" :";
        cin>>a[i];
    }
    cout<<"1. Bubble Sort. "<<endl<<"2. Binary Search"<<endl;
    cin>>x;
    if(x==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
            }
        }
    for(i=0;i<n;i++)
        {
    cout<<a[i]<<"\t";
    }
    }
 else if(x==2)
 {
     int left,right,mid,p;
     cout<<"Enter the element to be searched: ";
     cin>>p;
      left = 0;
        right = n-1;
       for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
            }
        }
        for(i=0;i<n;i++)
        {
    cout<<a[i]<<"\t";
        }
        cout<<"\n";

    /*    while(1)
        {
            if(left>right)
            {
                cout<<"Item do not found"<<endl;
                break;
            }
            else
            {*/
                while(left<=right)
                {
                    mid = (left + right)/2 ;
                    if(a[mid]==p)
                    {
                        cout<<"Item found at the position of "<<mid+1<<endl;
                        break;
                    }
                    if(a[mid]<p)
                    {
                        left = mid + 1;
                    }
                    else
                    {
                        right = mid - 1;
                    }
                }
            }
        }



