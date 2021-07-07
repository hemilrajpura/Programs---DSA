#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
cout<<endl<<endl<<" **repeated element**  : "<<endl<<endl;
cout<<"enter the size of an array: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];


cout<<"repeated element at smallest index is : ";

int minInd=INT_MAX;
const int e=1e6+2;
int idx[e];  

for(int i=0;i<n;i++)
  idx[i]=-1;

    for(int i=0;i<n;i++){
      if(idx[a[i]]!=-1)
        minInd=min(minInd,idx[a[i]]);
      
      else
        idx[a[i]]=i; 
    }

    if(minInd==INT_MAX)
      cout<<"-1";
    else
      cout<<endl<<endl<<minInd+1<<endl;


return 0;
}