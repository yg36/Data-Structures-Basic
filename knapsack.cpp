#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of items in sack: ";
    cin>>n;

    float w[n], p[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter profit of item "<< i+1<<": ";
        cin>>p[i];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter weight of item "<<i+1<<": ";
        cin>>w[i];
    }

    int wt;
    cout<<"Specify weight of knapsack: "<<endl;
    cin>>wt;

    float x[n];
    for(int i=0; i<n; i++)
    {
        x[i]= p[i]/w[i];
    }

    for( int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(x[i]<x[j])
          {
            float temp=x[j];
            x[j]=x[i];
            x[i]=temp;

            temp=w[j];
            w[j]=w[i];
            w[i]=temp;

            temp =p[j];
            p[j]=p[i];
            p[i]=temp;
            
          }
        }
    }

    cout<<"sorted  ratio by value/weight is :\n";
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
    }
    cout<<endl;

    float in_wt[n]={0.0};

    float result=0.0;
    for(int i=0;i<n && wt>0;i++)
    {
        if(w[i]<=wt)
        {
            in_wt[i]=1.0;
            result=result+p[i];
            wt-=w[i];
        }
        else{
            in_wt[i]+=float(wt)/w[i];
            result=result+(wt*x[i]);
            wt=0;
        }
        cout<<endl<<"remaining wt: "<<wt;
        cout<<"profit right now is: "<<result;
    }  

    cout<<"taken ratios are : ";
    for(int i=0;i<n;i++)
    {
        cout<<in_wt[i]<<"\t";
    }
    cout<<endl<< "max profit is: "<< result;
}