#include<iostream>
using namespace std;
int arr[100];
int top = -1;
int pop(){

  if(top == -1){
    cout<<"stack underflow";
     return 0;
  }
      else{
        int last= arr[top];
        top--;
        cout<<endl<<"pop operation performed "<<endl;
      return 1;
      }

}

int push(int x){

  if(top > 100){
    cout<<endl<<"stack overflow";
    return 0;
  }
  else{
    arr[top+1] = x;
    top++;
    cout<<endl<<"push operation performed "<<endl;
    return 1;
    }
}

int main(){

int oper;

cout<<endl<<"Enter 1 for push operation"<<endl;
cout<<endl<<"Enter 2 for pop operation"<<endl;
cin>>oper;

switch(oper){
case 1:
  int ele;
  cout<<endl<<"enter the element:"<<endl;
  cin>>ele;
  push(ele);
break;

case 2:
  cout<<endl<<"performing pop"<<endl;
  pop();
break;
}

int s=top;
cout<<endl<<"Elements In Stack :"<<endl;

while(s >= 0 ){
  cout<<arr[s]<<endl;
  s--;
}

return 0;
}