#include <stdio.h>
#include <conio.h>
typedef struct node {
int data;
struct node *left;
struct node *right;
}node ;

node *create(){
node *p;
char x;
printf("enter data(enter -1 for no node):");
scanf("%d", &x);
if(x==-1)
    return NULL;

p=(node*)malloc(sizeof(node));
p->data=x;
printf("\nenter left child of %d", x);
p->left=create();
printf("\nenter right child of %d", x);
p->right=create();
return p;
}
void main(){
node *root;

root=create();

}
