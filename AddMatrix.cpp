#include<iostream>
using namespace std;

int main()
{
    int r1,c1,i,j;
    cout<<"enter no of rows"<< endl;
    cin>>r1;
    cout<<" enter no of coloumns"<< endl;
    cin>>c1;
    int a1[r1][c1];

    int r2,c2;
    cout<<"enter size of matrix 2";
    cin>>r2>>c2;
    int a2[r2][c2];
    if(r1==r2 && c1 == c2)
    {
        // inserts elements horizontally
        for( i=0;i<r1;i++)
        {
            for( j=0;j<c1;j++)
            {
                cout<<"enter values for matrix 1";
                cin>>a1[i][j];
            }
        }
        for( i=0;i<r2;i++)
        {
            for( j=0;j<c2;j++)
            {
                cout<<"enter values for matrix 2"<<" ";
                cin>>a2[i][j];
            }
        }
        int a3[r1][c1];
        cout<<" added matrix is: "<< endl;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                a3[i][j]=a1[i][j]+a2[i][j];
                cout<<a3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else 
      cout<<"invalid order";
    return 0;
}