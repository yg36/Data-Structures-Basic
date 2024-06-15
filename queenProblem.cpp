#include<iostream>
using namespace std;


int main()
{
    int n;
    cout<<"enter no of queens";
    cin>>n;

    int board[n][n]={0};

    for(int i=0;i<n;i++)
    {
        if(queen_place(board,i))
        
    }
}