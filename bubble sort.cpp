#include <iostream>
using namespace std;
int main() {

  int n;
  cout<<"enter the size of an array ";
  cin>>n;
  int arr[n];
  int temp;
  cout<<endl<<"enter the elements of an array"<<endl;
  for(int i=0;i<5;i++)
    cin>>arr[i];

  int minInd;
  for(int i=0;i<n-1;i++){
    minInd=i;

    for(int j=i+1;j<n;j++){

        if(arr[minInd] > arr[j]){
          minInd = j;
        }

  }
  temp = arr[minInd];
  arr[minInd] = arr[i];
  arr[i] = temp;
}

cout<<endl<<"sorted array :"<<endl<<endl;

  for(int i=0;i<5;i++)
    cout<<arr[i]<<endl;  


}