// #include<iostream>
// using namespace std;

// MM(int a[][], int b[][], int i)
// {
//     if (i<=2)
//     {
//         int p, q, r, s, t, u, v;
//         p=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
//         q= (a[1][0]+a[1][1])* b[0][0];
//         r=a[0][0]*(b[0][1]-b[1][1]);
//         s=a[1][1]*(b[0][0]-b[1][0]);
//         t= (a[0][0]+a[1][1])*b[1][1];
//         u = (a[1][0] - a[0][0]) *(b[0][0]+ b[0][1]);
//         v = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);
        
//         c[0][0]=p+s-t+v;
//         c[0][1]=r+t;
//         c[1][0]=q+s;
//         c[1][1]=p=r+q-u;
//     }

//     else{
//         // divide 
//         MM(a[0][0], b[0][0],i/2)+ MM(a[0][1], b[1][0], i/2);
//         MM(a[0][0], b[0][1],i/2)+ MM(a[0][1], b[1][1], i/2);
//         MM(a[1][0], b[0][0],i/2)+ MM(a[1][1], b[1][0], i/2);
//         MM(a[1][0], b[0][1],i/2)+ MM(a[1][1], b[1][1], i/2);
//     }
// }

// int main()
// {
//     int r,c;
//     cout<<"enter no of rows in matrix";

//     int a[r][c]; // 2D matrix
//     int b[r][c];

//     cout<<"enter elements of matrix 1";
//     for(int i=0; i<r, i++)
//     {
//         for(int j=0; j<c;j++)
//         {
//             cin>>a[i][j];
//         }
//     }

//     cout<<"enter elements of matrix 2";
//     for(int i=0; i<r, i++)
//     {
//         for(int j=0; j<c;j++)
//         {
//             cin>>b[i][j];
//         }
//     }
    
//     int a11, a12,a21,a22,b11,b12,b21,b22;
//     p=(a11+a22)*(b11+b22);
//     q=(a21+a22)*b11;
//     r=a11*(b12-b22);
//     s=a22*(b21-b11);
//     t=(a11+a12)*b22;
//     u=(a11-a21)*(b11+b12);
//     v=(a12-a22)*(b21+b22);

    
// }

// strassen multiply
#include<iostream>
using namespace std;

int main(){
  int a[2][2], b[2][2], c[2][2], i, j;
  int m1, m2, m3, m4 , m5, m6, m7;
 
  cout<<"Enter the 4 elements of first matrix: ";
  for(i = 0;i < 2; i++)
      for(j = 0;j < 2; j++)
           cin>>a[i][j];
 
  cout<<"Enter the 4 elements of second matrix: ";
  for(i = 0; i < 2; i++)
      for(j = 0;j < 2; j++)
           cin>>b[i][j];
 
  cout<<"\nThe first matrix is\n";
  for(i = 0; i < 2; i++){
      cout<<endl;
      for(j = 0; j < 2; j++)
           cout<<a[i][j]<<"   ";
  }
 
  cout<<"\nThe second matrix is\n";
  for(i = 0;i < 2; i++){
      cout<<endl;
      for(j = 0;j < 2; j++)
           cout<<b[i][j]<<"  ";
  }
 
  m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
  m2= (a[1][0] + a[1][1]) * b[0][0];
  m3= a[0][0] * (b[0][1] - b[1][1]);
  m4= a[1][1] * (b[1][0] - b[0][0]);
  m5= (a[0][0] + a[0][1]) * b[1][1];
  m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
  m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
 
  c[0][0] = m1 + m4- m5 + m7;
  c[0][1] = m3 + m5;
  c[1][0] = m2 + m4;
  c[1][1] = m1 - m2 + m3 + m6;
 
   cout<<"\nAfter multiplication using Strassen's algorithm \n";
   for(i = 0; i < 2 ; i++){
      cout<<endl;
      for(j = 0;j < 2; j++)
           cout<<c[i][j]<<"  ";
   }
 
   return 0;
}