// #include<iostream>
// // #include<conio>
// using namespace std;

// void MaxMin( int a[],int s, int n, int &max, int &min)
// {   
//     if(n==1)
//     {
//         max=min=a[0];
//         return;
//     }
//     else if(n==2)
//     {
//         if(a[0]>a[1])
//         {
//             max=a[0];
//             min=a[1];
//         }
//         else{
//             max=a[1];
//             min=a[0];
//         }
//         return;
//     }
//     else
//     {
//         int mid;
//         int max1, min1, max2, min2;
//         mid= (n+s)/2;
//         MaxMin(a, s, mid, max1, min1);
//         MaxMin(a, mid, n, max2, min2);
//         // (max1>max2)?(max=max1):(max=max2);
//         // (min1<min2)?(min=min1):(min=min2);
//         max = (max1 > max2) ? max1 : max2;
//         min = (min1 < min2) ? min1 : min2;
//         cout<<"max element is: "<<max<< endl<< "min element is: "<<min;
//     }
// }

// int main()
// {
//     int n;
//     int max,min;

//     cout<<"no of element";
//     cin>>n;
    
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cout<<"enter element"<<i+1;
//         cin>>a[i];
//     }
//     MaxMin(a, 0, n, max, min);

// }

// MINMAX
// #include <iostream>
// using namespace std;

// void MaxMin(int a[], int s, int n, int &max, int &min)
// {
//     if ((n-s) == 1)
//     {
//         max = min = a[s];
//         return;
//     }
//     else if ((n-s) == 2)
//     {
//         if (a[s] > a[s + 1])
//         {
//             max = a[s];
//             min = a[s + 1];
//         }
//         else
//         {
//             max = a[s + 1];
//             min = a[s];
//         }
//         return;
//     }
//     else 
//     {
//         int mid;
//         mid = int((n + s) / 2);     //1
//         int max1, min1, max2, min2;
//         MaxMin(a, s, mid, max1, min1);      //a,0,1,max1,min1     // max1=min1=23
//         MaxMin(a, mid, n, max2, min2);       //a,1,3,max2,min2    //max2=56, min2=12
//         max = (max1 > max2) ? max1 : max2;
//         min = (min1 < min2) ? min1 : min2;   //max=56, min=12
//         return;
//     }
// }

// int main()
// {
//     int n;    //3

//     cout << "Enter number of elements: ";
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter element " << i + 1 << ": ";
//         cin >> a[i];
//     }      //12,56,23,

//     int max, min;
//     MaxMin(a, 0, n, max, min);    //a,0,3,
//     cout << "Max element is: " << max << endl << "Min element is: " << min;

//     return 0;
// }

// BINARY SEARCH
#include<iostream>
using namespace std;

void binarysearch(int a[], int s, int n, int x)    //a,0,4,44
{
    if ((n-s) >= 1) 
    {
        int mid = s + (n - s) / 2; // Corrected mid calculation     //0+3/2=1    //mid=1, a[mid]=22
        if (x == a[mid]) // Changed = to == for comparison
            cout << "Item found at index " << mid;
        else if (x < a[mid])
            binarysearch(a, s, mid - 1, x);
        else
            binarysearch(a, mid + 1, n , x); // Adjusted parameters for right half   //a,2, 4,44
    } 
    else 
    {
        cout << "Item not present";
    }
}

int main()
{
    int n;
    cout<<"enter number of elements";
    cin>>n;    //4

    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i+1<<" : ";
        cin>>a[i];    //11 22 33 44
    }

    int x;
    cout<<"enter value to be searched";
    cin>>x;   //44
    binarysearch(a,0,n,x);   //a,0,4,44
}