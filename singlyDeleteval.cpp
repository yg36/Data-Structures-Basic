#include <iostream>

using namespace std;

class node
{
public:
  int data;
  node *next;

    node (int val)
  {
    data = val;
    next = NULL;
  }
};


// INSERTING AT END OR INSERT ELEMENTS
void
insert (node * &head, int val)
{
  node *n = new node (val);
  if (head == NULL)
    {
      head = n;
      return;
    }
  node *temp = head;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = n;
}

//   INSERT AT HEAD 
void
insertathead (node * &head, int val)
{
  node *n = new node (val);
  n->next = head;
  head = n;
}

//DELETING BY VALUE
void deletebyvalue(node* &head,int val)
{
     node *temp = head;
    //   if list has one element
     if(temp->next==NULL)
       head=NULL;
     else
     {
       while(temp->next->data!=val)
       {
          temp=temp->next;
           
       }
          node *n=temp->next;
           temp->next=temp->next->next;
           delete n;
         
     }
}


//  DISPLAYING ELEMENTS
void
display (node * head)
{
  node *temp = head;
  while (temp != NULL)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
  cout << "NULL" << endl;
}

int
main ()
{
  node *head = NULL;
  insert (head, 1);
  insert (head, 2);
  insert (head, 3);
  cout << "linked list created is=";
  display (head);
  cout << "after inserting ELEMENT at head";
  insertathead (head, 0);
  display (head);
  deletebyvalue(head,2);
  cout<<"after DELETING";
  display(head);
  return 0;
}