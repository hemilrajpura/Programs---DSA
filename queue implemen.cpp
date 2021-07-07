#include<iostream>
using namespace std;
int arr[100];
int top = -1;
int rear = -1;

int dequeue(){

  if(top == -1 || top == rear){
    
    cout<<"queue underflow";

    return 0;
  }
      else{

        int last= arr[top];
        rear++;
        cout<<endl<<"dequeue operation performed "<<endl;
     
      return 1;
      }

}

int enqueue(int x){

  if(top > 100){
    cout<<endl<<"stack overflow";
    return 0;
  }
  else{
    arr[top+1] = x;
    top++;
    cout<<endl<<"enqueue operation performed "<<endl;

    if(rear == -1)
      rear++; 
    return 1;
    }
}

int main(){

int oper;

cout<<endl<<"Enter 1 for enqueue operation"<<endl;
cout<<endl<<"Enter 2 for dequeue operation"<<endl;
cin>>oper;
enqueue(11);
switch(oper){
case 1:
  int ele;
  cout<<endl<<"enter the element:"<<endl;
  cin>>ele;
  enqueue(ele);
break;

case 2:
  cout<<endl<<"performing Dequeue"<<endl;
  dequeue();
break;
}
enqueue(11);
int s=top;
cout<<endl<<"Elements In Queue :"<<endl;

while(top >= rear ){
  cout<<arr[rear]<<endl;
  rear++;
}

return 0;
}