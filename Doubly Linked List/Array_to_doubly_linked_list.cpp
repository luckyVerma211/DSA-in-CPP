#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node *prev,*next;
    Node(int value){
      data=value;
      prev=NULL;
      next=NULL;
    }
};
void display(Node *head){
  Node *ptr;
  ptr=head;
  while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
  cout<<endl;
}
int main(){
  Node *head,*tail;
  head=tail=NULL;
  int arr[]={10,20,30,40,50};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<5;i++){
    if(head==NULL){
      head=new Node(arr[i]);
      tail=head;
    }
    else{
      Node *temp;
      temp=new Node(arr[i]);
      tail->next=temp;
      temp->prev=tail;
      tail=temp;
    }
  }
  display(head);
  return 0;
}