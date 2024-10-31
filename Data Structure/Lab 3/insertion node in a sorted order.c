
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
    temp->data = value;
    temp->link = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node* t;
        t = head;
        while(t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

void sort_insert(int value2)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1 -> data = value2;
    if(head==NULL || temp1->data <head->data)
    {
        temp1->link = head;
        head = temp1;
    }
    else
    {
        struct Node* pred = head;
        struct Node* p = pred->link;
        while(p!=NULL && temp1->data > p->data)
        {
            pred = p;
           // printf("%d",p->data);
            p = p->link;
        }
        pred->link = temp1;
        temp1->link = p;
    }
}
int main()
{
    head = NULL;
    insert(1);
    insert(4);
    insert(3);
    print();
    printf("\nAfter insertion the linked list looks like: \n");
    sort_insert(2);
    print();
    return 0;
}
