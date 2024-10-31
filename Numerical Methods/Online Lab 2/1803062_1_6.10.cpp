#include<bits/stdc++.h>
using namespace std;

double Trapezoidal(double x[], double y[], double h, int n)
{
    int i;
    double t;
    t = h * ((y[0]+y[n-1])/2);
    for(i=1; i<n-1; i++)

    {
        t = t + h*y[i];
    }
    cout << "By trapezoidal, Answer = " << t << endl;
}

double Simpson(double x[], double y[], double h, int n)
{
    int i;
    double s;
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
    cout << "By simpson, Answer = " << s << endl;
}

main()
{
    double x[100], y[100],p;
    int n,i;
    while(1){
    cout << "Total term number: ";
    cin >> n;
    cout<<"Enter h value: ";
    cin>>p;
    for(i=0; i<n; i++)
    {
        cout << "x[" << i << "] = ";
        cin >>x[i];
        cout << "y[" << i << "] = ";
        cin >>y[i];
    }
    Trapezoidal(x,y,p,n);
    Simpson(x,y,p,n);
    cout<<endl;
    }
}
