#include<bits/stdc++.h>
using namespace std;

int binary_add(int x,int y)
{
    int z;
    while(z!=0)
    {
        z = (x&y)<<1;
        x = x^y;
        y = z;
    }
    return x;
}

int main()
{
    int p,q;
    cout<<"Enter 1st number: ";
    cin>>p;
    cout<<"Enter 2nd number: ";
    cin>>q;
    cout<<"The summation is: "<<binary_add(p,q);
}
