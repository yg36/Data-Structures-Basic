#include <iostream>

using namespace std;

class Node 
{
public:
    int data;
    Node *next;

    Node(int data) 
    {
        data = data;
        next = NULL;
    }
};

void insertathead(Node* &head, int data)
{
    Node *n=new Node(data);
    if(head==NULL)
    {
        n->next=head;
        head=n;
    }
}

int main() 
{
    Node *head = NULL;

    while (true) 
    {
        int data;
        cout << "Enter data : -1 to stop "<< endl<< "-2 to insert at head"<<endl<< "-3 to insert in last";
        cin >> data;

        if (data == -1) 
        {
            break;
        }

        Node *n = new Node(data);

        if (head == NULL) 
        {
            head = n;
        } 
        else 
        {
            Node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = n;
        }

        if(data==-2)
        {
            cout<<"element you wanna insert";
            cin>>data;
            insertathead(head ,data);
        }
    }

    Node *temp = head;

    while (temp != NULL) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}