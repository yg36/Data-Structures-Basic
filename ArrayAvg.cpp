#include<iostream>
using namespace std;
int main()
{
    int i=0,a[100],n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter element "<<i+1<<" :";
        cin >> a[i];
    }
    int sum=0, avg;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"sum="<<sum;
    avg = (sum/n);
    cout << "\n The average is "  <<avg;
}