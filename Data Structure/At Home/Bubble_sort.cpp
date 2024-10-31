#include<iostream>
using namespace std;

int main()
{
    int i,n,j,temp;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter element no. "<<i<<": ";
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }


    cout<<"After sorting, the array is: ";
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<"\t";
    }
}
