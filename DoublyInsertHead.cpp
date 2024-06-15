#include <iostream>

using namespace std;

class node
{
  public:
  int data;
  node* next;
  node* prev;
  
  node(int val)
  {
    data=val;
    next=NULL;
    prev=NULL;
  }
};


// INSERTING AT END OR INSERT ELEMENTS
void insert(node* &head, int val)
{
  node* n =new node(val);
  if (head==NULL)             //EMPTY LIST
  {
    head=n;
    return;
  }
  node* temp= head;
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  temp->next= n;
  n->prev=temp;
}
  
//   INSERT AT HEAD 
void insertathead(node* &head, int val)
{
    node* n=new node(val);
    head->prev=n;
    n->next=head;
    head=n;
}

//  DISPLAYING ELEMENTS
void display(node*head)
{
   node* temp=head;
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
  cout<<"linked list created is=";
  display(head);
  cout<<"after inserting ELEMENT at head ";
  insertathead(head,0);
  display(head);
  return 0;
}