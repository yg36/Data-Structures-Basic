// error
#include<iostream> 
using namespace std;
const int INF=10000;

int minDis(int dist[], bool done_v[], int v)
{
    int minDis= INF;
    int minIndex=-1;

    for(int i=0;i<v;i++)
    {                     
        if(!done_v[i] && dist[i]<=minDis)      // i vertex is not already finished and 
        {
            minDis=dist[i];
            minIndex=i;
        }
    }
    return minIndex;
}

void print(int dist[], int v)
{
    cout<<" vertex \t distance from source "<< endl;
    for(int i=0; i<v;i++)
    {
        cout << i << "\t\t" << dist[i] <<endl ;
    }
}

int main(){
    int graph[9][9] = {
        {5, 4, 5, 3, 9, 1, 6, 8, 4},
        {4, 5, 8, 3, 7, 1, 2, 11, 8},
        {7, 8, 6, 7, 3, 4, 2, 4, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };

    int v=9;   // max vertices
    int dist[v]={INF};         // stores min distance btw source and vertex v
    bool done_v[v]={false};    // true if vertex's shortest dis is already finalised
    
    dist[0]=0;     // 0 is source vertex and sitance to itself will be 0
    for(int i=0; i< v-1; i++)
    {
        int u= minDis(dist,done_v,v);
        done_v[u]=true;
        //  dist[0]=0;
        // Update dist value of the adjacent vertices of the picked vertex
        for (int i = 0; i < v; ++i) 
        {
            if (!done_v[i] && graph[u][i] && dist[u] != INF && dist[u] + graph[u][i] < dist[i])
                dist[i] = dist[u] + graph[u][i];
        }
    }
        print(dist,v);
    
}


#include <iostream>
const int INF = 1e9;

// Function to find the vertex with the minimum distance value, from the set of vertices not yet included in the shortest path tree
int minDistance(int dist[], bool sptSet[], int V) {
    int minDist = INF;
    int minIndex = -1;

    for (int v = 0; v < V; ++v) {
        if (!sptSet[v] && dist[v] <= minDist) {
            minDist = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}

// Function to print the constructed distance array
void printSolution(int dist[], int V) {
    std::cout << "Vertex \t Distance from Source" << std::endl;
    for (int i = 0; i < V; ++i)
        std::cout << i << " \t\t " << dist[i] << std::endl;
}

// Function to implement Dijkstra's algorithm for a given graph represented using adjacency matrix
void dijkstra(int graph[][9], int src) {
    int V = 9;
    int dist[V]; // The output array. dist[i] will hold the shortest distance from src to i
    bool sptSet[V]; // sptSet[i] will be true if vertex i is included in the shortest path tree or already finalized

    for (int i = 0; i < V; ++i) {
        dist[i] = INF;
        sptSet[i] = false;
    }

    dist[src] = 0; // Distance of source vertex from itself is always 0

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; ++count) {
        int u = minDistance(dist, sptSet, V); // Pick the minimum distance vertex from the set of vertices not yet processed
        sptSet[u] = true; // Mark the picked vertex as processed

        // Update dist value of the adjacent vertices of the picked vertex
        for (int v = 0; v < V; ++v) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }

    // Print the constructed distance array
    printSolution(dist, V);
}

int main() {
    // Example graph represented using adjacency matrix
    int graph[9][9] = {
        {0, 4, 0, 0, 0, 0, 0, 8, 0},
        {4, 0, 8, 0, 0, 0, 0, 11, 0},
        {0, 8, 0, 7, 0, 4, 0, 0, 2},
        {0, 0, 7, 0, 9, 14, 0, 0, 0},
        {0, 0, 0, 9, 0, 10, 0, 0, 0},
        {0, 0, 4, 14, 10, 0, 2, 0, 0},
        {0, 0, 0, 0, 0, 2, 0, 1, 6},
        {8, 11, 0, 0, 0, 0, 1, 0, 7},
        {0, 0, 2, 0, 0, 0, 6, 7, 0}
    };

    dijkstra(graph, 0); // Source vertex is 0

    return 0;
}