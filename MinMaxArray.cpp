#include<iostream>
using namespace std;

int maxelement(int a[],int n)
{
    int max=a[0];
    for(int j=1;j<n;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
    }
    cout<<"greatest element is: "<<max<<endl;
    return max;
}

int minelement(int a[],int n)
{
    int min=a[0];
    for(int j=1;j<n;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
        }
    }
    cout<<"smallest element is: "<<min<<endl;
    return min;
}


int main()
{
    int n;
    cout<<" enter no of elements";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element"<<i+1;
        cin>>a[i];
    }
    int c;
    cout<<"enter choice"<<endl<<"1 for min element"<<endl<<"2 for max element";
    cin>>c;
    if(c==1){
        cout<<maxelement(a,n);
    }
    else if(c==2){
        cout<<minelement(a,n);
    }
    else{
        cout<<"invalid choice... enter again";
    }
    return 0;
}