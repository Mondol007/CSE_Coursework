#include<iostream>
using namespace std;

class sam
{
    int a[3];
public:
    sam();
    void show();
};
sam::sam()
{

    cout<<"Items:\nfrench fry = 20\nchicken = 120"<<endl;
    cout<<"chicken=";
    cin>>a[0];
    cout<<"french fry=";
    cin>>a[1];
}
void sam::show()
{
    int sum;
    sum = a[0]*120+a[1]*20;
    cout<<"amount = "<<sum<<endl;
}
int main()
{
    sam ob;
    ob.show();
    return 0;
}
