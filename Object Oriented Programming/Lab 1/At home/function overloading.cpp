#include<iostream>
#include<cstring>
 #include<bits/stdc++.h>
 using namespace std;

 class stu
 {
     int r;
     char n[200];
     float cgpa;
 public:
    void geta(char *p,int roll,float gpa)
    {
        strcpy(n,p);
        r = roll;
        cgpa = gpa;
    }
    void show()
    {
        cout<< "Name";
        puts(n);
        cout<<"roll"<<r<<"CGPA"<<cgpa<<endl;
    }
 };

     int main()
     {
         stu ob;
         int b;
         char a[100];
         float c;
         cout<<"Name";
         gets(a);
         cout<<"input your roll and gpa";
         cin>>b>>c;
         ob.geta(a,b,c);
         ob.show();
     }

