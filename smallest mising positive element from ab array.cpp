#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
cout<<"*smallest mising positive element from ab array *"<<endl<<endl;
cout<<"enter the size of an array: "<<endl;
cin>>n;
cout<<"enter the elements :"<<endl;

int a[n];
bool boolArray[n];

for(int i=0;i<n;i++)
  cin>>a[i];

for(int i=0;i<n;i++)
  boolArray[i]=false;
   
int ans=-1,j=0;

  for(j=0;j<n;j++){
      if(a[j]>=0)
       boolArray[a[j]] =  true;
  } 
    for(j=0;j<n;j++){
      if(boolArray[j] == false)
        {ans=j;
          break; }
    }
cout<<endl<<endl<<"answer is :  "<<ans<<endl;

return 0;
}