#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n;
    cout<<"Give the range: ";
    cin>>n;
    int a[n],b[n],A,B,AND[n],OR[n],XOR[n];
    cout<<"Enter A: ";
    cin>>A;
    cout<<"Enter B: ";
    cin>>B;
    for(p=0;p<n;p++)
    {
        a[p] = A%10;
        A = A/10;
        b[p] = B%10;
        B = B/10;
    }
    for(p=0;p<n;p++)
    {
        if(a[p]==1 && b[p]==1)
        {
            AND[p] = 1;
        }
        else
        {
            AND[p] = 0;
        }
    }
    for(p=0;p<n;p++)
    {
        if(a[p]==1 || b[p]==1)
        {
            OR[p] = 1;
        }
        else
        {
            OR[p] = 0;
        }
    }
    for(p=0;p<n;p++)
    {
        if(a[p]==b[p])
        {
            XOR[p] = 0;
        }
        else
        {
            XOR[p] = 1;
        }
    }
    cout<<"AND = : ";
    for(p=n-1;p>=0;p--)
    {
        cout<<AND[p];
    }
    cout<<endl;
     cout<<"OR = : ";
    for(p=n-1;p>=0;p--)
    {
        cout<<OR[p];
    }
     cout<<endl;
     cout<<"XOR = : ";
    for(p=n-1;p>=0;p--)
    {
        cout<<XOR[p];
    }
     cout<<endl;
     return 0;
}
