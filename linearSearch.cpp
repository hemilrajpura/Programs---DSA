#include <iostream>
using namespace std;

int linearSe(int arr[],int size,int number){

for(int i=0;i<size;i++){
  if(arr[i]==number){
      return i;
  }
 
}
 return -1;
}

int main() {
  
int s,n,a[10];
s=sizeof(a)/sizeof(a[0]);
cout<<"**Linear Search**";
cout<<"enter 10 elements of array:";

for(int i=0;i<s;i++){
cin>>a[i];
}

cout<<"enter the elements to be searched:";
cin>>n;

int result=linearSe(a,s,n);

if(result==-1)
  cout<<"cant find";

  else
    cout<<"found at:"<<result+1;

    return 0;
}