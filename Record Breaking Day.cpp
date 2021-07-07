#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

int n,ans=0;
cout<<endl<<endl<<"Record Breaking Day  : "<<endl<<endl;
cout<<"enter the size of an array: ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}

cout<<"Record Breakig Day is : ";
int i=0;
while(i<n){
  if(i==0){
    if(a[i]>a[i+1])
      cout<<endl<<a[i]<<endl;
  }

  else if(a[i]>a[i-1] && a[i]>a[i+1])
    cout<<endl<<a[i]<<endl;

  else if(i==n-1){
   if(a[i]>a[i-1])
      cout<<endl<<a[i]<<endl;
  }
  i++;
}

return 0;
}