#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    
    public:
    node(int val)
    {
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insert(node* &head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
      head=n;
      return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void insertHEAD(node* &head,int val)
{
    node* n=new node(val);
    node* temp=head;
    n->next=head;
    head->prev=n;
    head=n;
}

void deletehead(node* &head)
{
    node*todelete=head;
    todelete->next->prev=NULL;
    head=head->next;
    delete todelete;
}

void deletebyval(node* &head,int val)
{
    node* temp=head;
    if(temp->next==NULL)
    {
        head=NULL;
    }
    else
    {
        while(temp->next->data!=val)
        {
            temp=temp->next;
        }
        temp->next->prev=NULL;
        delete temp;
    }
}

void deleteLAST(node* &head)
{
    node*temp=head; 
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    // node*n=temp;
    temp->prev->next=NULL;
    delete temp;
}

void display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    cout<<"linked list is ";
    display(head);
    insertHEAD(head,0);
    cout<<"after insertion ";
    display(head);
    insert(head,1);
    display(head);
    deleteLAST(head);
    cout<<"after deleting last";
    display(head);
    return 0;
}