#include<iostream>
using namespace std;

int main()
{
    int a[100], i, n=0,data;
    while(true)
    {
        cout<<"enter data(-1 to stop) "<<endl;
        cin>>data;
        if(data==-1)
        {
         break;
        } 
        else 
        {
            a[n]=data;
            n++;
        }

        cout<<"elements are: ";
    }
    for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    return 0;
}