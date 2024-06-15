#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;

    node(int val)
    {
        data=val;
        left= NULL;
        right= NULL;
    }
};

void postorder(struct node* root)
{
    if(root==NULL)
        return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<< " ";
}

void preorder(struct node* root)
{
    if(root==NULL)
        return ;

    cout<<root->data<< " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node* root)
{
    if(root==NULL)
        return ;

    inorder(root->left);
    cout<<root->data<< " ";
    inorder(root->right);

}

void insert(struct node* root, int val)
{
    if(root==NULL)
    {
        node* temp= new node(val);
        root->data=temp;
    }

    insert(root->left);
    insert(root->right);
}

int main()
{
    struct node* root= new node(1);
    root->left=new node(2);
    root-> right= new node(3);
    root->right->right= new node(7);
    root->right->left= new node(6);
    root->left->right= new node(5);
    root->left->left= new node(4);

    cout<<"preorder of tree is: "<<endl;
    preorder(root);

    cout<<"\ninorder of tree is: "<<endl;
    inorder(root);

    cout<<"\npostorder of tree is: "<<endl;
    postorder(root);
    // insert(root, 4);
    return 0;

}