#include <iostream>

using namespace std;

int main()
{
    int a[100],i, item,count=0,n;
    cout<<"enter number of elements";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1;
        cin>>a[i];
    }
    cout<<"number to search";
    cin>>item;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
        {
            count++;
            cout<<"element present at "<<i+1<<endl;
        }
    }
    if(count>0)
    {
        cout<<"item is present"<<count<<"times";
    }
    else
       cout<<"unsuccessful search";
       return 0;
}