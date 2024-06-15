#include<iostream>
using namespace std;
int main() 
{
    int i,n,item;
    cout<<"Enter the size of an array:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1;
        cin>>a[i];
    }
    char ch;
    cout<<"s for inserting at start";
    cout<<endl<<"l for imnserting at last";
    cin>>ch;
    cout<<"enter item to be inserted";
    cin>>item;
    if(ch=='s')
    {
        for(i=n;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=item;
    }
    else if(ch=='l')
    {
        a[n]=item;
        n++;
        cout<<endl<<a[n+1]<<endl;
    }
    else
    {
        cout<<"invalid choice";
    }
    n=n+1;
    cout<<"new array is: "<<" ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}