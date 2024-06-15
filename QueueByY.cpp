#include<iostream>
using namespace std;

int rear(int queue[], int n, int r, int f)
{
    if(r==n-1)
    {
        cout<<"queue is full"; 
        return 0;
    }

    else
    {
    if(f==-1)
        f=0;
    int item;
    cout<<"enter item";
    cin>>item;
    r++; 
    queue[r]=item;
    cout<<"item is inserted at index "<< r+1<< endl;
    }  
}

int front(int queue[], int n, int r, int f)
{
    if(r>=0)
    {
        cout << "queue is empty \n";
        return 0;
    }
}

int peek(int queue, int f)
{
    if(f==-1)
    {
        cout<<"queue is empty";
    }
    cout<<queue[f];
}

int main()
{
    int n;
    cout<<"enter no of elements";
    cin>>n;

    int queue[n];
    int f=-1, r=-1; 

    int ch;
    cout<<"1. rear/enqueue"<<endl<<"2. front/dequeue"<<endl<<"3. isempty"<<endl<<"4. isfull"<<endl<<"5. show"<<endl<<"6. peek"<< endl<<"7. exit()"<<endl;  

   while(1)
    {
        cout<<"enter choice";
        cin>>ch;
        switch(ch)
        {
            case 1: rear(queue,n,r,f);
            // case 2: front(queue, n, r, f);
            // case 3: isempty();
            // case 4: isfull();
            // case 5: show();
            case 7: peek(queue, f);
            // case 6: exit(0);
            
            default: cout<<"invalid opt"<<endl;
        }
    }

}