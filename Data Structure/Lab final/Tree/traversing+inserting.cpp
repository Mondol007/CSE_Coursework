#include<iostream>
using namespace std;

struct BST
{
    int data;
    BST* left;
    BST*right;
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
    if(root==NULL)
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

void preorder(BST* root)
{
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(BST* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(BST* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


main()
{
    BST* root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,25);
    root = insert(root,35);
    root = insert(root,13);
    root = insert(root,45);
    cout<<"Pre-order traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"in-order traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Post-order traversal: ";
    postorder(root);
    cout<<endl;
}
