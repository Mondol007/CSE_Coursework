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
    int a,b,c,d,e;
    printf("Enter five element for creating link list: ");
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    head = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;
    struct Node* four = NULL;
    struct Node* five = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = a;
    head -> link = (struct Node*)malloc(sizeof(struct Node));
    two = head ->link;
    two->data = b;
    two->link = (struct Node*)malloc(sizeof(struct Node));
    three = two->link;
    three->data = c;
    three->link = (struct Node*)malloc(sizeof(struct Node));
    four = three->link;
    four->data = d;
    four->link = (struct Node*)malloc(sizeof(struct Node));
    five = four->link;
    five->data = e;
    five->link = NULL;
    printf("The linked list created for five Nodes are: ");
    print();
}

