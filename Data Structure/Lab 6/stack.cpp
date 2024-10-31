#include<iostream>
using namespace std;
class stack
{
    int top = 0,i;
    int arr[20];
public:
    void push(int data)
    {
            arr[top] = data;
             top = top + 1;
    }
    int pop()
    {
        top = top - 1;
        return top + 1;

    }
    void show()
    {
        for(i=0;i<top;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};
main()
{
    stack a;
    int p;
    a.push(1);
    a.push(2);
    a.push(3);
    cout<<"After pushing element, the stack looks like: "<<endl;
    a.show();
    cout<<"\n";
    p = a.pop();
    cout<<p<<" has been removed\n";
    cout<<"After Poping, the stack looks like: "<<endl;
    a.show();
}
