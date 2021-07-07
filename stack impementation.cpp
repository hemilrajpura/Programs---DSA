#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sta[100],top=-1;

void push(int x){
  if(top<=100){
    sta[++top]=x;
    cout<<endl<<"element inserted:"<<sta[top];

  }
  else
    cout<<endl<<"Stack Overflow";
}

void pop(){
  if(top==-1)
      cout<<endl<<"Stack Underflow";

  else{
    cout<<endl<<sta[top]<<" "<<"Element Removed ";
    top--;  }
}
void print(){
  cout<<endl<<"Printing elements of stack:";
  for(int i=0;i<=top;i++)
    cout<<endl<<sta[i];

}

int main() {

int max=100;
int top=-1;
cout<<"Stack Implementation:"<<endl<<endl;

push(5);
pop();
push(4);
push(1);
print();

return 0;
}