#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"no of jobs";
   cin>>n;

   int p[n],d[n];
   for(int i=0;i<n;i++)
   {
    cout<< "enter profit of job "<<i+1<<": ";
    cin>>p[i];
   } 
   for(int i=0;i<n;i++)
   {
    cout<< "enter deadline of job "<<i+1<<": ";
    cin>>d[i];
   } 

   int max_deadline=0;
   for(int i=0;i<n;i++)
   {
    if(max_deadline<d[i])
        max_deadline=d[i];
   }

   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(p[i]<p[j])
         {
            int temp= p[j];
            p[j]=p[i];
            p[i]=temp;

            temp=d[j];
            d[j]=d[i];
            d[i]=temp;
         }
      }
   }

   // cout<<"sorted profits and deadlines are: ";
   // for(int i=0;i<n;i++)
   // {
   //    cout<< p[i]<< " "<<d[i]<<" ";
   // }
   
   bool slots[max_deadline]={false};
   // to store scheduled jobs
   int final_seq[n];
   int count=0;

   for(int i=0;i<n;i++)
   {
      int deadline= d[i];
      int profit=p[i];

      for(int j= deadline -1; j>=0;j--)
      {
         if (slots[j]==false)
         {
            slots[j]=true;
            final_seq[count++]=profit;
            break;
         }
      }
   }
   cout<<"scheduled jobs: "<<endl;
   int total_profit=0;
   for(int i=0;i<count;i++)
   {
      cout<<"profit: "<<final_seq[i]<<endl;
      total_profit+=final_seq[i];
   }
   cout<<"total profit is: "<<total_profit<<endl;
}