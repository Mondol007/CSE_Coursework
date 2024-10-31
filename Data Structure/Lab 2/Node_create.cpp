#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    void show()
    {
        cout<<data<<endl;
    }
};

int main()
{
    int i;

    Node *arr[5];
    for(i=0; i<5; i++)
    {
        arr[i]= new Node;
    }
    for(i=0; i<5; i++)
    {
        cin>>arr[i]->data;
        arr[i]->next = arr[i+1];
        if(arr[i]==arr[6])
         arr[6]->next = NULL;
    }
    cout<<endl;
    for(i=0;i<5; i++)
    {
        arr[i]->show();
    }
    return 0;
}
