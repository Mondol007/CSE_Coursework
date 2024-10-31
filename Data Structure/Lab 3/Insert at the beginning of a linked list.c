#include<stdio.h>
struct Node
{
    int data;
    struct Node* link;

};
struct Node* head;

void print()
{
    struct Node* temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp -> link;
    }
}

void insert(int value)
{
     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
     temp -> data = value;
     temp-> link = head;
     head = temp;
}
int main()
{
    head = NULL;
    insert(1);
    insert(4);
    insert(3);
    print();
    return 0;
}