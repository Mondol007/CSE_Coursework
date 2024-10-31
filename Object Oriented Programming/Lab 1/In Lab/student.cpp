#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class student
{
    char n[80];
    int r;
    double g;
public:
    void get(char *p, int roll, double gpa)
    {
        strcpy(n,p);
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
    char l[80];
    int roll1;
    double cgpa;
    cout<<"Enter your name"<<endl;
    gets(l);
    cout<<"Enter your roll"<<endl;
    cin>>roll1;
    cout<<"Enter your cg"<<endl;
    cin>>cgpa;
    ob.get(l,roll1,cgpa);
    ob.show();
}
