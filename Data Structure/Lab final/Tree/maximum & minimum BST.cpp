#include<iostream>
using namespace std;

struct BST
{
    int data;
    BST* left;
    BST* right;
};

BST* getnode(int data)
{
    BST* node = new BST();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
BST* insert(BST* root, int data)
{
    if(root == NULL)
    {
        root = getnode(data);
    }
    else if(data<=root->data)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
    return root;
}

int FindMin(BST* root1)
{
    if(root1==NULL)
    {
        cout<<"Error: Empty."<<endl;
        return -1;
    }
    while(root1->left!=NULL)
    {
        root1 = root1->left;
    }
    return root1->data;
}

int FindMax(BST* root)
{
    if(root==NULL)
    {
        cout<<"Error: Empty."<<endl;
        return -1;
    }
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root->data;
}

int main()
{
    BST* root = NULL;
    /*root = insert(root,15);
    root = insert(root,13);
    root = insert(root,20);
    root = insert(root,12);
    root = insert(root,8);
    root = insert(root,25);
    root = insert(root,35);
    root = insert(root,5);*/
    int a,x,i;
    cout<<"Enter the number of values to be inserted: ";
    cin>>x;
    for(i=0;i<x;i++)
    {
        cout<<"Enter number to be inserted: ";
        cin>>a;
        root = insert(root,a);
    }
    int p = FindMin(root);
    int q = FindMax(root);
    cout<<p<<endl<<q<<endl;
}
