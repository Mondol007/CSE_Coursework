#include<iostream>
using namespace std;

int main()
{
    int i,n,j,temp,minimum;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        minimum = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[minimum])
            {
             minimum=j;
            }
        }
        if(minimum!=i)
        {
            temp = a[i];
            a[i] = a[minimum];
            a[minimum] = temp;
        }
    }
    cout<<"After sorting the array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
}
