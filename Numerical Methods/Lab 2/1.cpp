#include<iostream>
using namespace std;

double function(double x)

{
    return x*x*x + x*x + x + 7;
}

double p = 0.001;
double c;

void bisection(double a, double b)

{
    if(function(a) * function(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }
    while((b-a)>=p)
    {
        c = (a+b)/2;
        if(function(c)==0.0)
        {
            break;
        }
        else if(function(c)*function(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        cout<<"Root = "<<c<<endl;
    }
}

void falseposition(double a, double b)

{
    if(function(a) * function(b) >= 0)
    {
        cout<<"Incorrect a and b";
        return;
    }
     int j = 0;
    while(j<10)
    {
        c = (1.0*(a*function(b)-b*function(a))/(function(b)-function(a)));
        if(function(c)==0.0)
        {
            break;
        }
        else if(function(c)*function(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
         j++;
        cout<<"Root = "<<c<<endl;
//        j++;
    }
}

int main()
{
    int m;
    double a,b;
    a = -3;
    b = -2;
    cout<<"1. Bisection method\n2.False position method\n3.exit\n";
    while(1){
    cin>>m;
    if(m==1){
    bisection(a,b);
    cout<<"\n";
    cout<<"The accurate Root by bisection method = "<<c<<endl;
    }
    if(m==2) {
    falseposition(a,b);
    cout<<"\n";
    cout<<"The accurate Root by false position method = "<<c<<endl;
    }
    if(m==3)
    {
        return 0;
    }
}
}
