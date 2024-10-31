#include<iostream>
using namespace std;
class myclass
{
    int a;
public:
    myclass();
    ~myclass();
    void show();
};
myclass::myclass()
{
    a = 10;
}
myclass::~myclass()
{
    cout<<"Destructor has destroyed the object";
}
void myclass::show()
{
    cout<<a<<endl;
}
int main()
{
    myclass ob;
    ob.show();
}
