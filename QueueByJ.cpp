#include<iostream>
using namespace std;
int Queue[5],f=-1,r=-1;
void rear();
void front();
void show();
int main()
{
    int ch;
    cout<<"1.rear:-"<<endl;
    cout<<"2.front:-"<<endl;
    cout<<"3.show:-"<<endl;
    cout<<"4.exit:-"<<endl;
    while(1)
    {
        cout<<"enter choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:rear();
            break;
            case 2:front();
            break;
            case 3:show();
            break;
            case 4:exit(0);
            break;
            default:cout<<"invalid opt";
        }
    }
}
    void rear()
    {
        int item;
        if(r==5-1)
        {
            cout<<"Queue is full";
        }
        else
        {
            if(f==-1)
            {
                f=0;
            }
            cout<<"insert element in queue";
            cin>>item;
            r=r+1;
            Queue[r]=item;
        }
    }
    void front()
    {
        int i;
        if(f==-1)
        {
            cout<<"Queue is full";
        }
        else
        {
            cout<<"deleted"<<Queue[f];
            f=f+1;
        }
    }
    void show()
    {
        int i;
        if(f==-1)
        {
            cout<<"Queue is empty";
        }
        else
        {
            cout<<"queue element";
            for(i=f;i<=r;i++)
            {
                cout<<Queue[i];
            }
        }
    }

