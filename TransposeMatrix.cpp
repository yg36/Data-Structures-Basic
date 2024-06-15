#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j;
    cout<<"enter no of rows"<< endl;
    cin>>r;
    cout<<" enter no of coloumns"<< endl;
    cin>>c;
    int a1[r][c];

// inserts elements horizontally
    for( i=0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            cout<<"enter value";
            cin>>a1[i][j];
        }
    }
    cout<<" matrix created is: "<< endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }
    int a2[c][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            a2[j][i]=a1[i][j];
        }
        cout<<endl;
    }
    cout<<" transpose of array is:"<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}