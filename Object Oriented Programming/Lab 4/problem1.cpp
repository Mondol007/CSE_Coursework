#include<iostream>
#include<cstring>
using namespace std;

class registration
{
public:
    string name;
    int roll;
    string department;
    registration()
    {
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll: ";
    cin>>roll;
    cout<<"Enter department: ";
    cin>>department;
    show();
    }
    void show()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Roll is: "<<roll<<endl;
        cout<<"Department is: "<<department<<endl;
    }
};

class library
{
public:
    string book_name;
    string book_writer;
    string k;
    int isbn;
    int copies;
    library(){
        cout<<"Enter book name: ";
    cin>>book_name;
    cout<<"Enter book writer name: ";
    cin>>k;
    cin>>book_writer;
    cout<<"Enter isbn number: ";
            cin>>isbn;
            cout<<"Enter number of copies: ";
            cin>>copies;
            show();
            }
    void show()
    {
        cout<<"Book name is: "<<book_name<<endl;
        cout<<"Book_writer: "<<book_writer<<endl;
        cout<<"isbn is: "<<isbn<<endl;
        cout<<"copies needed: "<<copies<<endl;
    }
};
int main()
{
    int x,y,z,i,j,k,p;
    string temp;
    cout<<"Menu: "<<endl<<"1. Registration. "<<endl<<"2.Get Books. "<<endl;
    cin>>x;
    if(x==1)
    {
        cout<<"Enter number of students: ";
        cin>>z;
       for(p=0;p<z;p++)
        {
        registration ob;
        }
    }
    if(x==2)
    {
        cout<<"Enter number of books: "<<endl;
        cin>>y;
        library ob1[y];
        cout<<"Now we have to sort the books name.\n";
        for(i=0;i<y;i++)
        {
           for(k=i+1;k<y;k++)
           {
               if(ob1[i].book_name>ob1[k].book_name)
               {
                   temp = ob1[k].book_name;
                   ob1[k].book_name= ob1[i].book_name;
                   ob1[i].book_name = temp;
               }
           }
           cout<<ob1[i].book_name<<endl;
        }
    }
}
