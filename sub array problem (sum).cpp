#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

int n;
cout<<endl<<endl<<" **sub array problem (sum):**  : "<<endl<<endl;
cout<<"enter the size of an array: ";
cin>>n;
int s;
cout<<"enter the sum:";
cin>>s;

int a[n];
for(int i=0;i<n;i++)
  cin>>a[i];
int st=-1;
int end=-1;
int sum=0;

/*for(int st=0;st<n;st++){
  if(a[st]+a[end]==s){
    cout<<endl;
cout<<"sum of sub array found :"<<st<<"  to  "<<end;
cout<<endl;
  }
  else{
    while(a[st]+a[end]<s){
      cur=cur+a[st]+a[end];
      end++;
    }
  }
} */
int i=0,j=0;
  while(j<n && sum+a[j]<=s ){
      sum += a[j];
      j++;
  }
  if(sum==s){
    cout<<endl<<"found at:"<<i+1<<" and "<<j<<endl;
    return 0;
  }
  while(j<n){
      sum=sum+a[j];
      while(sum > s){
      sum=sum-a[i];
      i++;
      }
        if(sum==s){
            st=i+1;
            end=j+1;
          break;
        }
      j++;
  }
 cout<<endl<<"found at:"<<st<<" and "<<end<<endl;


return 0;
}