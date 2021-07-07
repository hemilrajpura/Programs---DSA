#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

int size;
cout<<"Selection Sort:";
cout<<"enter the size of an array:";
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
  cin>>arr[i];
}
cout<<"before sorting";
for(int i=0;i<size;++i){
int minIn=i;
      for(int j=i+1;j<size;++j){
        if(arr[j]<arr[minIn]){
          minIn=j;
        }
          int temp;
          //sawp(arr[i],arr[minIn]);
          temp=arr[minIn];
          arr[minIn]=arr[i];
          arr[i]=temp; 
}
}
cout<<endl<<"after sorting";
//printing an array
for(int i=0;i<size;i++)
  cout<<endl<<arr[i];


return 0;
}