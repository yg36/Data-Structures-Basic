// SEARCHING ELEMENT N TIMES IN DOUBLY
#include <iostream>

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

void search(node* head,int val)
{
    int count=0;
    node*temp=head;
    while(temp!=NULL)
    {
        count++;
        if(temp->data==val)
        {
            cout<<"present at "<<count<<endl;
            
        }
        temp=temp->next;
    }
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
    search(head,1);
    return 0;
}