#include<iostream>
using namespace std;

int swap(int &x, int &y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
    return (x,y);
}

int bubbelsort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

int selectionSort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int small=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
               small=j; 
            }
        }
        if(a[i]!=a[small])
            swap(a[i],a[small]);
    }
}

void insertionsort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while((j>=0) && (a[j]>key))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

void merge(int a[], int l, int mid, int r)//7 6 5 4 3
{
    int n1=mid-l+1;//n1=2-0+1=3
    int n2=r-mid;//n2=4-2=2

    int a1[n1];//3
    int a2[n2];//2
                 //3
    for(int i=0;i<n1;i++)
    {
        a1[i]=a[l+i];//7 6 5
    }             //2
    for(int j=0;j<n2;j++)
    {
        a2[j]=a[mid+1+j];//4 3
    }

    int i=0,j=0;
    int k=l;//0

    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            a[k]=a1[i];
            k++; i++;
        }
        else
        {
            a[k]=a2[j];
            k++; j++;
        }
    }
    while(i<n1)
    {
        a[k]=a1[i];
        k++; i++;
    }

    while(j<n2)
    {
        a[k]=a2[j];
        k++; j++;
    }
}

void mergesort(int a[],int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);

        merge(a,l,mid,r);
    }
}

void quicksort(int a[], int s, int n)
{
    s=0;
    
    int e=n-1;

    if(s<e)
    {
        int pi=partition(a, s, e);
        

        quicksort(a,s, pi-1);
        quicksort(a,pi+1,e);
    }
}

int partition(int a[], int s, int e)
{
    int pivot=a[e];
    int i=s-1;

    for(int j=s;j<e;j++)
    {
        int pi;
       if(a[j]<pi)
       {
        i++;
        swap(i,j);
       }
    }
    swap(i,e);
    return i+1;
}

void display(int a[], int n)
{
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<" Entered Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    // bubbelsort(a,n);
    // selectionSort(a,n);
    // insertionsort(a,n);
    // mergesort(a,0,n-1);
    quicksort(a, 0,n);
    display(a,n);
    return 0;
}