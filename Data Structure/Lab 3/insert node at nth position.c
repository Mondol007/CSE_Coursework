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

void insert(int value, int n)
{
    int i;
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
    temp1->data = value;
    temp1->link = NULL;
    if(n==1)
    {
        temp1->link = head;
        head = temp1;
        return;
    }
        struct Node* temp2 = (struct Node*)malloc(sizeof(struct Node));
        temp2 = head;
        for(i=1;i<=n-2;i++)
        {
            temp2 = temp2->link;
        }
        temp1->link = temp2->link;
        temp2->link = temp1;

}
int main()
{
    head = NULL;
    insert(2,1);
    insert(5,2);
    insert(6,1);
    insert(3,3);
    insert(9,4);
    print();
}
