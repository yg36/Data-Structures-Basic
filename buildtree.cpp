#include<iostream>
using namespace std;

struct Tree
{
    int data;
    struct Tree* left;
    struct Tree* right;

    Tree(int val)
    {
        data=val;
        left=NULL;
        right= NULL;
    }
};

int search(int inorder[], int start, int end, int curr)
{
    for(int i= start; i<=end; i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

Tree* buildtreePreIn(int preorder[], int inorder[], int start, int end)
{
    if(start > end)
    {
        return NULL;
    }
    int idx=0;
    
    int curr= preorder[idx];
    idx++;
    Tree* node= new Tree(curr);

    if(start==NULL)
        return node;
    int pos=search(inorder, start, end, curr);
    node->left=buildtreePreIn(preorder,inorder, start, pos-1);
    node->right=buildtreePreIn(preorder, inorder, pos, end);

    return node;
}

Tree* buildtreePostIn(int postorder[], int inorder[], int start, int end)
{
    if(start > end)
    {
        return NULL;
    }
    int idx=4;
    
    int curr= postorder[idx];
    idx--;
    Tree* node= new Tree(curr);

    if(start==end)
        return node;
    int pos=search(inorder, start, end, curr);
    node->right=buildtreePostIn(postorder, inorder, pos+1, end);
    node->left=buildtreePostIn(postorder,inorder, start, pos-1);

    return node;
}

int inorderprint(struct Tree* root){
    if(root==NULL)
        return 0;
    inorderprint(root->left);
    cout<<root->data;
    inorderprint(root->right);

    return 0;
}

int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};

    Tree* root =buildtreePreIn(preorder, inorder, 0,4);
    // node *root =buildtreePostIn(postorder, inorder, 0,4);
    inorderprint(root);

    return 0;
}