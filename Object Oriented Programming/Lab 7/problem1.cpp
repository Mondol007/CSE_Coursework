#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class RUET
{
public:
    int ID;
    char name[100],address[100];
    RUET()
    {
        cout<<"Enter ID: ";
        cin>>ID;
        cout<<"Enter name: ";
        fflush(stdin);
        gets(name);
        cout<<"Enter address: ";
        fflush(stdin);
        gets(address);
    }
};

class Student:virtual public RUET
{
    float sum = 0.0;
    char cour[100];
public:
    void cgpa()
    {
        int i;
        float gpa;
        for(i=0; i<5; i++)
        {
            cout<<"Enter the gpa of subject "<<i+1<<": ";
            cin>>gpa;
            sum = (sum+(3*gpa));
        }
        sum = sum/15;
    }
    void course()
    {
        int t;
        cout<<"\nMenu:\n1.Want to take extra course.\n2.Not to take extra course."<<endl;
        cin>>t;
        if(t==1)
        {
            cout<<"Enter your course name: ";
            fflush(stdin);
            gets(cour);
        }
        else if(t==2)
        {
            return;
        }
    }
    void showstudent()
    {
        cout<<"ID: "<<ID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Result: "<<sum<<endl;
        cout<<"Extra course: "<<cour<<endl;
    }
};

class Stuff:virtual public RUET
{
public:
    char designation[100];
    int salary;
    void get1()
    {
        cout<<"Enter the designation of the stuff: ";
        fflush(stdin);
        gets(designation);
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    void showstuff()
    {
        cout<<"ID: "<<ID<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Designation: "<<designation<<endl;
        cout<<"Total salary : "<<salary<<endl;
    }
};

class Teacher_assistant: public Student,public Stuff

{
    public:
        Teacher_assistant()
        {
            int p;
            cout<<"1.Student.\n2.Teacher.\n";
            cin>>p;
            if(p==1)
            {
                cgpa();
                course();
                showstudent();
            }
            if(p==2)
            {
                get1();
                showstuff();
            }
        }
};


int main()
{
    int z;
    Teacher_assistant ob[3];
    return 0;
}














