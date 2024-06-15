
#include <iostream>
using namespace std;


// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int fact=1;
// 	    for(int i=n;i>0;i--)
// 	      fact=fact*i;
// 	    cout<<fact<<endl; 
// 	}
	
// 	return 0;
// }

int main() 
{
	int n=4; int r=-1, f=-1, queue[4]={45, 34, 12, 23};
    if(r==n-1)
    {
        cout<<"queue is full"; 
        return 0;
    }

    else
    {
    if(f==-1)
        f=0;
    int item;
    cout<<"enter item";
    cin>>item;
    r++; 
    queue[r]=item;
    cout<<"item is inserted at index "<< r+1<< endl;
    }  

  return 0;
}