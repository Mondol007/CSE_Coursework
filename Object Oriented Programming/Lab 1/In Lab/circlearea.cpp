#include<iostream>
using namespace std;

class Area
{
    double r;
    public:
        void get_r(int a)
        {
            r=a;
        }
        double Area_Circle()
        {
            double A;
            A = (4*r*r*r*3.14)/3;
            return A;

        }
};
int main()
{
    Area ob;
    double x,z;
    cout<<"Enter radius";
    cin>>x;
    ob.get_r(x);
    z = ob.Area_Circle();
    cout<<"The volume is:" <<z<<endl;
}
