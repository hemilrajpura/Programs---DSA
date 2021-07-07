#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

int n,ans=0;
cout<<endl<<endl<<"Longest subsequent array: "<<endl<<endl;
cout<<"enter the size of an array: ";
cin>>n;
int a[n];
int len=2;
int cur=0;
cout<<"enter the elements of an array:"<<endl;
for(int i=0;i<n;i++){
  cin>>a[i];
}   
int prev=a[1]-a[0];
int j=2;
while(j<n){
    if(prev==a[j]-a[j-1])
      len++;
    else{
     prev=a[j]-a[j-1];
     len=2; }
     j++; 
     ans=max(ans,len);
}
cout<<endl<<"answer is : "<<ans<<endl;

 
return 0;
}