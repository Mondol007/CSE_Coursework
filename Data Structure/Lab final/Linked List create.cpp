#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* link;
};
struct node* head;

void print()
{
    struct node* temp;
    temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->link;
    }
}

void insert(int value, int n)

{
    int i;
    struct node* temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = value;
    temp1->link = NULL;

    if(n==1)
    {
        temp1->link = head;
        head = temp1;
        return;
    }
    struct node* temp2 = (struct node*) malloc(sizeof(struct node));
    temp2 = head;
    for(i=1;i<=n-2;i++)
    {
        temp2 = temp2->link;
    }
    temp1->link = temp2->link;
    temp2->link = temp1;

}

void deletenode(int pos)
{
    int i;
    if(pos==1)
    {
        struct node* temp;
        temp = head;
        head = head->link;
        free(temp);
    }
    else
    {
        struct node* temp1;
        temp1 = head;
        for(i=1;i<=pos-2;i++)
        {
            temp1 = temp1->link;
        }
        struct node* temp2;
        temp2 = temp1->link;
        temp1->link=temp2->link;
        free(temp2);
    }
}


int main()
{
    int x;
    head = NULL;
    insert(2,1);
    insert(5,2);
    insert(6,1);
    insert(3,3);
    insert(9,4);
    print();
    cout<<endl;
    cout<<"Enter the position to delete: ";
    cin>>x;
    deletenode(x);
    cout<<"After deleting: "<<endl;
    print();
    return 0;
}
