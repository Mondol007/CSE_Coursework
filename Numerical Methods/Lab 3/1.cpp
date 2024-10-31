#include<bits/stdc++.h>
#define e 2.71828
using namespace std;

double function1(double x)

{
    return x*pow(e,x)-cos(x);
}

double function2(double x)

{
    return x*pow(e,x)+pow(e,x)+sin(x);
}

double function3(double x, double n)

{
    return (x+n)*pow(e,x)-cos((n*(3.1416/2))+x);
}

double p = 0.0001;
double x;
int k,n;

void NR(double a)
{
   for(k=0;k<8;k++)
   {
       x = a-(function1(a)/function2(a));
       a=x;
   }
}

void GNR(double a, double b)
{
   for(n=1;n<=2;n++)
   {
       x = a-((2-n)*function3(n,a)/function3(n+1,a));
       a=x;
   }
}

int main()
{
    int m,p;
    double a;
    a = 0.5;
    cout<<"1. Newton Raphson method\n2.Generalized Newton Raphson method\n3.exit\n";
    while(1){
    cin>>m;
    if(m==1){
    NR(a);
    cout<<"\n";
    cout<<"The accurate Root by Newton Raphson method = "<<x<<endl;
    }
    if(m==2)
    {
    p=2;
    GNR(a,p);
    cout<<"\n";
    cout<<"The accurate Root by Generalized Newton Raphson method = "<<x<<endl;
    }
    if(m==3)
    {
        return 0;
    }
}
}

