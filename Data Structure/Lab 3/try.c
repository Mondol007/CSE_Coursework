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
int main()
{
    head = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;
    struct Node* four = NULL;
    struct Node* five = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 2;
    head -> link = (struct Node*)malloc(sizeof(struct Node));
    two = head ->link;
    two->data = 5;
    two->link = (struct Node*)malloc(sizeof(struct Node));
    three = two->link;
    three->data = 6;
    three->link = (struct Node*)malloc(sizeof(struct Node));
    four = three->link;
    four->data = 1;
    four->link = (struct Node*)malloc(sizeof(struct Node));
    five = four->link;
    five->data = 9;
    five->link = NULL;
    print();
}
