#include<iostream>
using namespace std;

int main()
{
    int r,c,i,j,s=0;
    cout<<"enter no of rows"<< endl;
    cin>>r;
    cout<<" enter no of coloumns"<< endl;
    cin>>c;
    int a[r][c];
    if(r==c)
    {
        // inserts elements horizontally
        for(i=0;i<r;i++)
        {
            for( j=0;j<c;j++)
            {
                cout<<"enter value";
                cin>>a[i][j];
            }
        }
        cout<<" matrix created is: "<< endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        for(i=0;i<r;i++)
        {
            s=s+a[i][i];
            cout<<endl;
        }
        cout<<"sum of diagonal elements is:"<<s;
    }
    else{
        cout<<"invalid order";
    }
    return 0;
}
