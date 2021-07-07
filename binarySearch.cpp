#include <iostream>
using namespace std;

int binarySe(int arr[],int first,int last,int n){

if(last>=first){
int mid=first+(last-1)/2;

if(arr[mid]==n)
  return mid;

if(arr[mid]>n)
  return binarySe(arr,first,mid-1,n);

if(arr[mid]<n)
  return binarySe(arr,mid+1,last,n);
}



 return -1;
}

int main() {
  
int s,n,a[10];
s=sizeof(a)/sizeof(a[0]);
cout<<"**Binray Search**";
cout<<"enter 10 elements of array:";

for(int i=0;i<s;i++){
cin>>a[i];
}

cout<<"enter the elements to be searched:";
cin>>n;

int result=binarySe(a,0,s-1,n);

if(result==-1)
  cout<<"cant find";
  else
    cout<<"found at:"<<result+1;

return 0;
}