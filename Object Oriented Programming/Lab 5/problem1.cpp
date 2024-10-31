//operator overloading
#include<iostream>
using namespace std;
class op
{
    public:
    double a,b;
    void get()
    {
        cout<<"Enter two element: ";
        cin>>a>>b;
    }
    op operator++()
    {
        this->a = ++a;
        this->b = ++b;
        return *this;
    }
     op operator--()
    {
        this->a = --a;
        this->b = --b;
        return *this;
    }
     op operator++(int notused)
    {
        a++;
        this->a = a;
        b++;
        this->b = b;
        return *this;
    }
      op operator--(int notused)
    {
        a--;
        this->a = a;
        b--;
        this->b = b;
        return *this;
    }
        op operator+(op ob)
        {
            op temp;
            temp.a = this->a+ob.a;
            temp.b = this->b+ob.b;
            return temp;
        }
                op operator-(op ob)
        {
            op temp;
            temp.a = this->a-ob.a;
            temp.b = this->b-ob.b;
            return temp;
        }
                op operator*(op ob)
        {
            op temp;
            temp.a = this->a*ob.a;
            temp.b = this->b*ob.b;
            return temp;
        }
                op operator/(op ob)
        {
            op temp;
            temp.a = this->a/ob.a;
            temp.b = this->b/ob.b;
            return temp;
        }
        op operator>(op ob)
        {
            cout<<"for x: ";
            if (this->a>ob.a){
            cout<<"yes"<<endl;}
            else
                {cout<<"No."<<endl;}
                cout<<"for y: ";
            if (this->b>ob.b)
            cout<<"yes"<<endl;
            else
                cout<<"No."<<endl;
        }
 op operator<(op ob)
        {
            cout<<"for x: ";
            if (this->a<ob.a){
            cout<<"yes"<<endl;}
            else
                {cout<<"No."<<endl;}
                cout<<"for y: ";
            if (this->b<ob.b)
            cout<<"yes"<<endl;
            else
                cout<<"No."<<endl;
        }
 op operator==(op ob)
        {
            cout<<"for x: ";
            if (this->a==ob.a){
            cout<<"yes"<<endl;}
            else
                {cout<<"No."<<endl;}
                cout<<"for y: ";
            if (this->b==ob.b)
            cout<<"yes"<<endl;
            else
                cout<<"No."<<endl;
        }


        void show()
{
    cout<<a<<"\t"<<b<<endl;
}
};

int main()
{
    int n,z;
    op o1,o2,o3;
    o1.get();
    o2.get();
    while(1)
    {
    cout<<"Menu: \n"<<"1.addition.\n"<<"2.subtraction.\n"<<"3.multiplication.\n"<<"4.Division.\n"<<"5.pre-increment.\n"<<"6.pre-decrement.\n"<<"7.post increment.\n"<<"8.post decrement.\n"<<"9.greater.\n"<<"10.less.\n"<<"11.equal.\n"<<"12.exit.\n";
    cin>>n;
    if(n==1)
    {
        o3 = o1+o2;
        o3.show();
    }
      if(n==2)
    {
        o3 = o1-o2 ;
        o3.show();
    }
      if(n==3)
    {
        o3 = o1*o2;
        o3.show();
    }
      if(n==4)
    {
        o3 = o1/o2;
        o3.show();
    }
      if(n==5)
    {
        ++o1;
        ++o2;
        o1.show();
        o2.show();
    }
      if(n==6)
    {
       --o1;
        --o2;
        o1.show();
        o2.show();
    }
    if(n==7)
    {
        o1++;
        o2++;
        o1.show();
        o2.show();
    }
   if(n==8)
    {
        o1--;
        o2--;
        o1.show();
        o2.show();
    }
      if(n==9)
    {
        o1>o2;
    }
      if(n==10)
    {
        o1<o2;
    }
      if(n==11)
    {
        o1==o2;
    }
    if(n==12)
    {
        break;
    }
}
}
