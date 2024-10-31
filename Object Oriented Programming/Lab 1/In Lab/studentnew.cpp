
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class student
{
    string n;
    int r;
    double g;
public:
    void get(string name, int roll, double gpa)
    {
        n = name;
        r = roll;
        g = gpa;

    }
     void show()
        {
          cout<<"Name is: "<<n<<endl;
            cout<<"Roll is: "<<r<<endl;
              cout<<"Gpa is: "<<g<<endl;

        }

};

int main()
{
    student ob;
    string l;
    int roll1;
    double cgpa;
    cout<<"Enter your name"<<endl;
    cin>>l;
    cout<<"Enter your roll"<<endl;
    cin>>roll1;
    cout<<"Enter your cg"<<endl;
    cin>>cgpa;
    ob.get(l,roll1,cgpa);
    ob.show();
}
