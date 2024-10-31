#include<bits/stdc++.h>
using namespace std;
int i,j;
main()
{
    int n = 5;
    double h, s = 0.0,t;
    double x[] = {0.00, 0.25, 0.50 , 0.75, 1.00};
    double y[] = {1.0000, 0.9896, 0.9589 , 0.9089, 0.8415};
    for(i=0;i<n;i++){
        y[i] = y[i]*y[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout  << x[i] << "\t";
        cout  << y[i];
        cout << endl;
    }
    h = x[1]-x[0];
    s = h* ((y[0]+y[n-1])/3);
    for(i=1; i<n-1; i++)
    {
        if(i%2 == 0)
        {
            s = s + (h/3)*2*y[i];
        }
        else
        {
            s = s + (h/3)*4*y[i];
        }
    }
    cout<<endl<<"The Volume is: "<<3.1416*s<<endl;
    }
