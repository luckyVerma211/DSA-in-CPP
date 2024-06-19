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
Node* CreateDLL(int arr[],int idx,int size,Node *back){
  if(idx==size)
    return NULL;
  Node *temp;
  temp=new Node(arr[idx]);
  temp->prev=back;
  temp->next=CreateDLL(arr,idx+1,size,temp);
  return temp;
}
void display(Node *head){
  Node *ptr;
  ptr=head;
  if(ptr==NULL){
    cout<<"List is Empty!!\n";
    return;
  }
  cout<<"The Linked List is: "<<endl;
  while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
  cout<<endl;
}
int main(){
  Node *head;
  head=NULL;
  int arr[]={10,20,30,40,50};
  int n=sizeof(arr)/sizeof(arr[0]);
  head=CreateDLL(arr,0,n,NULL);
  display(head);
  return 0;
}