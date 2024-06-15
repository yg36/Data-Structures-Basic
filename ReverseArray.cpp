#include<iostream>
using namespace std;

int main()
{
    int a[100], i, n=0,data,item;
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
    }

    cout<<"size of array is:"<<n<<endl;
    cout<<"initial array is:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    for(i=0;i<n/2;i++)
    {
        //swaping the elements in the array
        item=a[i];
        a[i]=a[(n)-i-1];
        a[(n)-i-1]=item;
    }
    cout<<"reversed array is:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}