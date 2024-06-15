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

int main() 
{
    Node *head = NULL;

    while (true) 
    {
        int data;
        cout << "Enter data (-1 to stop): ";
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