  #include<iostream>
using namespace std;

class restaurent
{
    int p;
    string q;
    double r;
public:
    restaurent()
    {
        cout<<"Enter item_no: "<<"\t";
        cin>>p;
        cout<<"Enter item_name: ";
        cin>>q;
        cout<<"Enter price: "<<"\t";
        cin>>r;
    }
    void show()
    {
        cout<<"Item_no: "<<"\t"<<"Item_name"<<"\t"<<"Price: "<<endl;
        cout<<p<<"\t\t"<<q<<"\t\t"<<r<<endl;
    }
    int bill(int x)
    {
        int sum = 0;
        sum = sum + (x*r);
    return sum;
    }
};
int main()
{
    int n,i,j,a,b,k = 0;
    int sum = 0;
    cout<<"Enter number of items: ";
    cin>>n;
    int m[n],o[n];
    restaurent ob[n];
    for(i=0;i<n;i++)
    {
        ob[i].show();
    }
    for(i=0;i<n;i++)
    {
        cout<<"Enter quantity for item "<<i+1<<" : ";
        cin>>j;
        k = k + ob[i].bill(j);
    }
    cout<<"Total bill is : "<<k<<endl;
}
