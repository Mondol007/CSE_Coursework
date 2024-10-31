
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

void deleteNode(int position)
{
    int i;
    if(position == 1)
    {
        struct Node* temp;
        temp = head;
        head = head->link;
        free(temp);
    }
    else
    {
        struct Node* temp1;
        temp1 = head;
        for(i=1;i<=position-2;i++)
        {
            temp1 = temp1->link;
        }
        struct Node* temp2;
        temp2 = temp1->link;
        temp1->link = temp2->link;
        free(temp2);
    }
}

int main()
{
    int x;
    head = NULL;
    insert(10);
    insert(4);
    insert(3);
    insert(1);
    print();
    printf("\n");
    printf("Enter the position for deleting the node: ");
    scanf("%d",&x);
    deleteNode(x);
    printf("\n");
    print();
    return 0;
}
