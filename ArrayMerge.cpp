#include<iostream>

using namespace std;
 int main()
 {
    int a[100],b[100],s1,s2,i,j;
    cout<<"emtetr size of 1 array";
    cin>>s1;
    cout<<"\nenter elements in the first array ";
    for( i=0;i<=s1-1;++i)
    {
        cout<<"enter element "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"enter size of second array"<<endl;
    cin>>s2;
    cout<<"\n enter elements in the second array ";
    for (i=0;i<s2;i++)
    {
        cin>>b[i]<<endl;
    }
    int s3=s1+s2;
    int c[s3];
    for(i=0;i<s1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<s2;j++)
    {
        c[s1]=b[j];
        s1++;
    }
    cout<<"new array is:";
    for(i=0;i<s3;i++)
    {
        cout<<c[i]<<" ";
    }
 }