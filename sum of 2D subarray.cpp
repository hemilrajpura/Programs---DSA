#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
cout<<"Sum of 2D subarray:"<<endl;
cout<<"enter the size of an array:"<<endl;
cin>>n;
int ar[n][n];


cout<<endl<<"enter the elements of an array:"<<endl;
for(int i=1;i<=n;++i)
  for(int j=1;j<=n;++j)
    cin>>ar[i][j];

/* cout<<endl<<"Enter the number of queries :"<<endl;
int q;
cin>>q; */

for(int i=1;i<=n;++i){
  for(int j=1;j<=n;++j){
    cout<<ar[i][j];
  }
  cout<<endl;
}



cout<<endl<<"enter the queries(a,b,c,d): "<<endl;

  cout<<endl<<"query :"<<endl;
 int a,b,c,d,sum=0;
  cin>>a>>b>>c>>d;
  cout<<endl<<"let's calculate the sum of array["<<a<<"]["<<b<<"] To "<<"["<<c<<"]["<<d<<"]"<<endl;

    for(int i=a;i<=c;++i){
              for(int j=b;j<=d;++j)
              {
                sum +=ar[i][j];
              }
    }
    cout<<endl<<"Sum is : "<<sum<<endl;
  
   
return 0;
}