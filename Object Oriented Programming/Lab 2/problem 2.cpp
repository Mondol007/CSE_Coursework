#include<iostream>
#include<cstring>
using namespace std;
class account
{
    string name;
    int account_no;
    double balance;
    int pin;
    public:
        void set(string name, int account_no, double balance,int pin)
        {
            this->name = name;
            this->account_no = account_no;
            this->balance = balance;
            this->pin = pin;
        }
            int credit(int m)
        {

            balance = balance + m;
              return balance;


        }
        int debit(int n)
        {

            balance = balance - n;
               return balance;


        }

        void show()
        {
            cout<<"Name is: "<<name<<endl;
             cout<<"account no is: "<<account_no<<endl;
              cout<<"balance is: "<<balance<<endl;
               cout<<"pin is: "<<pin<<endl;
        }


};
int main()
{
    account ob;
    int p,q,r,s,x,n,p1,p2,s2,s3,s4;
    string s1;
    cout<<"Enter name: "<<endl;
    getline(cin,s1);
    cout<<"Enter account no: "<<endl;
    cin>>s2;
    cout<<"Enter amount: "<<endl;
    cin>>s3;
    cout<<"Enter pin"<<endl;
    cin>>s4;
    ob.set(s1,s2,s3,s4);
    cout<<"Enter your Choice: "<<endl<<"1. Credit"<<endl<<"2. Debit"<<endl<<"3. Showdata "<<endl<<"4.Exit"<<endl;
    cin>>x;
    while(1)
    {
    if(x==1)
    {
    cout<<"How much money you want to insert: ";
    cin>>p;
     p1 = ob.credit(p);
      cout<<"Current balance is: "<<p1<<endl;

    }
        if(x==2)
    {
    cout<<"How much money you want to decrease: ";
    cin>>q;
    p2 = ob.debit(q);

     cout<<"Current balance is: "<<p2<<endl;
    if(p2<0)
    {
        break;
    }
    }
        if(x==3)
    {

          // ob.set("Mondol Mridul Provakar",15241,500,12849);
           ob.show();
           break;
    }
        if(x==4)
  {
      break;
  }
}
}
