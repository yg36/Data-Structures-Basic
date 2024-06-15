#include<iostream>
using namespace std;

int main()
{
    int a[100],i,n,beg,end,mid,item;

    cout<<"no of elements to be inserted";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<endl;
        cin>>a[i];
    }

    beg=0,end=n-1;
    mid=int((beg+end)/2);
    cout<<"search item"<< endl;
    cin>>item;

    while(beg<=end && a[mid]!=item)
    {
        if(item<a[mid])
        {
            end=mid-1;
        }
        else
        {
            beg=mid+1;
        }
        mid=int((beg+end)/2);
    }
    if(a[mid]==item)
    {
        cout<<"item present at "<<mid+1;
    }
    else
       cout<<"item not present";
}

