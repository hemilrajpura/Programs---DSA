#include<iostream>
using namespace std;


struct Node{
  int data;
  struct Node * next;

};
void printLL(struct Node * poi){

  cout<<endl<<endl<<"Printing Linked List.."<<endl;

  while(poi != NULL){

      cout<<endl<<poi -> data<<endl;
      poi = poi->next;
      
  }

}
int main(){

  struct Node * head;
  struct Node * second;
  struct Node * third;
  head = (struct Node *) malloc(sizeof(struct Node)); 
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *) malloc(sizeof(struct Node));

  //linking
  head -> data = 5;
  head -> next = second;

  second -> data = 10;
  second -> next =  third;

  third -> data = 15;
  third -> next = NULL;

  printLL(head);
  //printing the first data
  //cout<<endl<<head->data<<endl;
  return 0;
}