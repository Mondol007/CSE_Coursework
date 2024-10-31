#include<iostream>
using namespace std;
class queue
{
    int front = 0,rear = 0,i;
    int arr[20];
public:
    void push(int data)
    {
            arr[rear] = data;
             rear = rear + 1;
    }
    int pop()
    {
        front = front + 1;
        return arr[front-1];

    }
    void showfront()
    {
        for(i=front;i<rear;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
     void showrear()
    {
        for(i=0;i<rear;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};
main()
{
    queue a;
    int p;
    a.push(10);
    a.push(20);
    a.push(30);
    cout<<"After pushing element, the queue looks like: "<<endl;
    a.showrear();
    cout<<"\n";
    p = a.pop();
    cout<<p<<" has been removed\n";
    cout<<"After Poping, the queue looks like: "<<endl;
    a.showfront();
}
