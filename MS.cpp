#include<iostream>
using namespace std;
const int INF= 1e9;

int main()
{
    // int n,i,j;
    // cout<<"enter order of graph: ";
    // cin>>n;

    // int graph[n][n];
    // cout<<"enter elements: ";
    // for(i=0; i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         cin>>graph[i][j];
    //     }
    // }
    int i,j;
    int graph[8][8]=
      {{INF, 1, 2, 7, INF, INF, INF, INF}, 
       {INF, INF, INF, INF, 4, 8, INF, INF}, 
       {INF, INF, INF, INF, 9, 5, 17, INF}, 
       {INF, INF, INF, INF, INF, INF, 2, INF}, 
       {INF, INF, INF, INF, INF, INF, INF, 20}, 
       {INF, INF, INF, INF, INF, INF, INF, 15}, 
       {INF, INF, INF, INF, INF, INF, INF, 2}, 
      {INF, INF, INF, INF, INF, INF, INF, INF}};
      int n=8;
    int cost[n];     
    cost[n-1]=0;    // cost[7]=0
    for(j=n-2; j>=0;j--)     //6 to 0
    {
        cost[j]=INF;      //cost[6] = INF

        for(i=j; i<n; i++)      // i=6 to 7
        {
            if(graph[i][j]==INF)       //graph[6][7]== inf
                continue;
            cost[j]=min(cost[j], graph[i][j]+cost[j]);    // cost[6]= min(cost[6], graph[6][7]+cost[6])
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(graph[i][j]==INF)
                cout<<"INF";
            else
                cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"cost is: "<<cost[j];
}

#include<iostream>
using namespace std;

