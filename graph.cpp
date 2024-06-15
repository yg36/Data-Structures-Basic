// creating a graph*
// #include<iostream>
// using namespace std;

// int main(){
//     int n,m,i,j;
//     cout<<"enter no of edges";
//     cin>>m;
//     cout<<"enter no of vertices";
//     cin>>n;

//     int graph[n][n]={0};

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<graph[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(i=0;i<m;i++)
//     {
//         int v1,v2;
//         cout<<"enter the vertices where edge exists";
//         cin>>v1>>v2;
//         graph[v1-1][v2-1]=1;
//         graph[v2-1][v1-1]=1;    // for undirected graph
//     }

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<graph[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     // // display edges
//     // for(i=0; i<n;i++)
//     // {
//     //     for(j=0;i<n;i++)
//     //     {
//     //         if(graph[i][j]!=0)
//     //         {
//     //             cout<<"there's an edge between"<<i<<"and"<<j;
//     //         }
//     //     }
//     // }
// }

// space complexity=O(V^2)  time complexity = O(V*E)

// creating a graph*
// #include<iostream>
// using namespace std;

// int main(){
//     int n,m, wt;
//     cout<<"enter no of vertices";
//     cin>>n;
//     cout<<"enter no of edges";
//     cin>>m;

//     int v1,v2;
//     int graph[n][n]={0};
//     for(int i=0;i<m;i++)
//     {
//         cout<<"enter source and destination of each edge";
//         cin>>v1>>v2;
//         cout<<"enter weight of that edge";
//         cin>>wt;
//         graph[v1-1][v2-1]=wt;
//     }

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;i++)
//         {
//             cout<<graph[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// creating a weighted and undirected graph 
// #include<iostream>
// using namespace std;

// int main(){
//     int array[10][10]={0}, n,i,j,count,edges,weight;
//     cout<<"enter no of vertices";
//     cin>>n;

//     cout<<"enter no of edges";
//     cin>>edges;

//     for(count=1;count<=edges;count++)
//     {
//         cout<<"enter source of edge";
//         cin>>i;
//         cout<<"enter destination of edge";
//         cin>>j;
//         cout<<"enter weight of that edge";
//         cin>>weight;
//         array[i-1][j-1]=weight;
//     }

//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         {
//             cout<<array[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


// count no of edges in undirected graph
// #include<iostream>
// using namespace std;

// int main(){
//     int count =0,graph[4][4]=
//     {{1,1,1,0},
//     {0,0,0,0},
//     {0,0,0,1},
//     {1,0,0,0}};

//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             if(graph[i][j]==1)
//                 count++;
//         }
//     }
//     cout<<"total no of edges are: "<<count;
// }

// count no of edges in  directed graph
// #include<iostream>
// using namespace std;

// int main()
// {
//     int count=0, graph[4][4]={{1,1,1,1},{1,0,0,0},{1,0,0,1},{1,0,1,0}};
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0; j<i;j++)
//         {
//             if(graph[i][j]!=0)
//                 count++;
//         }
//     }
//     cout<<"no of edges are: "<<count;
// }

// finding shortest and longest edge in a graph
#include<iostream>
using namespace std;


void max_edge(int array[], int n)
{
    int max=array[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<array[i][j])
                max = array[i][j];
        }
    }
    cout<<"max edge is:  "<<max<<endl;
}

void min_edge(int array[], int n)
{
    int min=array[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(min>array[i][j])
                min = array[i][j];
        }
    }
    cout<<"min edge is:  "<<min<<endl;
}

int main(){
    int  n,i,j,count,edges,weight;
    cout<<"enter no of vertices";
    cin>>n;

    cout<<"enter no of edges";
    cin>>edges;

    int array[n][n]={0};
    for(count=1;count<=edges;count++)
    {
        cout<<"enter source of edge";
        cin>>i;
        cout<<"enter destination of edge";
        cin>>j;
        cout<<"enter weight of that edge";
        cin>>weight;
        array[i-1][j-1]=weight;
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    max_edge(array, n);
    min_edge(array, n)
}