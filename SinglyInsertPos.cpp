#include<iostream>
using namespace std;
struct node
{
    int data;
    node *link;

    node(int val)
    {
        data=val;
        link=NULL;
    }
};
void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=n;
}


void insertathead(node* &head,int val)
{
    node* n=new node(val);
    n->link=head;
    head=n;
}


node*insertpos(node *head, int position, int data)
{ 
node *temp = new node(data);

 if(position == 1)
{
      temp -> link = head;
      return temp;
}

node *curr = head;

for(int i = 1;i <= position-2 && curr != NULL; i++)
{
         curr = curr ->link;
}

if(curr == NULL)
{
         return head;
}

//Insertion and returning head
temp -> link = curr -> link;
curr -> link = temp;
return head;
}

void display(node* head)
{
   node* temp=head;
   while(temp!=NULL)
   {
    cout<<temp->data<<"->";
    temp=temp->link;
   }
   cout<<"NULL";
   cout<<endl;
}

int main()
{
    node* head=NULL;
     insertAtTail(head,34);
     insertAtTail(head,45);
     insertAtTail(head,22);
     display(head);
    //  insertathead(head,100);
    //  insertathead(head,98);
    // display(head);
    insertpos(head,4,1000);
    // cout<<"After insertion:";
     display(head);
   
    
    
    return 0;
    
}