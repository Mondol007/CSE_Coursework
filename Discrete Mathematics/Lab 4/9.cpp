#include<bits/stdc++.h>
using namespace std;
int main()
{
    float pi = 0.0;
    int i;
    for(i=0;i<100000;i++)
    {
        pi+=(pow(-1,i)/((2*i)+1));
    }
    cout<<4*pi;
}
