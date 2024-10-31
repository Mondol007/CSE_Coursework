#include<iostream>
using namespace std;

class geometry
{
    double h,w;
public:
    geometry(double hi, double wi)
    {
        h=hi;
        w=wi;
    }
    double area_rectangle()
    {
        return h*w;
    }
    double area_triangle()
    {
        return 0.5*h*w;
    }
    double area_perimeter()
    {
        return 2*(h+w);
    }
    ~geometry()
    {
        cout<<"Object has been destroyed. "<<endl;
    }
};

int main()
{
    int i,x;
    double m,n,a,b;
    cout<<"Enter the height & width for object 1: ";
    cin>>m>>n;
    geometry ob1(m,n);
    cout<<"Area of the rectangle : "<<ob1.area_rectangle()<<endl;
    cout<<"Area of the triangle : "<<ob1.area_triangle()<<endl;
    cout<<"Area of the perimeter : "<<ob1.area_perimeter()<<endl;
    cout<<"\n\n";
    cout<<"Enter the elements for object 2: ";
    cin>>x;
//    geometry ob2[x];
    for(i=0;i<x;i++){
    cout<<"Enter the height & width for object 2: ";
    cin>>a>>b;
    geometry ob2(a,b);
   // for(i=0;i<5;i++)
    //{
    cout<<"Area of the rectangle : "<<ob2[i].area_rectangle()<<endl;
    cout<<"Area of the triangle : "<<ob2[i].area_triangle()<<endl;
    cout<<"Area of the perimeter : "<<ob2[i].area_perimeter()<<endl;
    }
    return 0;
}
