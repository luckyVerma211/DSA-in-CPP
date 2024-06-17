#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node *next;
    
    Node(int value){
      data=value;
      next=NULL;
    }
};
Node* CreateLinkedList(int arr[],int idx,int n){
  if(idx==n)
    return NULL;
  Node *temp;
  temp=new Node(arr[idx]);
  temp->next=CreateLinkedList(arr,idx+1,n);
  return temp;
}
void display(Node **start){
  Node *temp;
  temp=*start;
  if(temp==NULL)
    printf("List is Empty\n");
  else{
    do{
      cout<<temp->data<<" ";
      temp=temp->next;
    }while(temp!=NULL);
    cout<<endl;
  }
}
int main(){
  Node *Head;
  Head=NULL;
  int arr[]={2,4,6,8,10};
  Head=CreateLinkedList(arr,0,5);
  display(&Head);
  return 0;
}