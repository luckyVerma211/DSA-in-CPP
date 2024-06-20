/*
Head->2->2->2->3->3->4->4->4->5
Output: Head->2->3->4->5*/
#include<iostream>
#include<vector>
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
Node *Head;


//Removing duplicates value
void Remove_duplicate(Node *head){
  Node *ptr1,*ptr2;
  ptr1=head;
  ptr2=head->next;
  while(ptr2!=NULL){
    if(ptr1->data==ptr2->data){
      ptr1->next=ptr2->next;
      delete ptr2;
      ptr2=ptr1->next;
    }
    else{
      ptr1=ptr1->next;
      ptr2=ptr2->next;
    }
  }
  ptr1->next=NULL;
}

Node* CreateList(int arr[],int idx,int size){
  if(idx==size)
    return NULL;
  Node *temp;
  temp=new Node(arr[idx]);
  temp->next=CreateList(arr,idx+1,size);
  return temp;
}

void display(Node *start){
  if(start==NULL){
    cout<<"List is Empty!!\n";
    return;
  }
  Node *ptr;
  ptr=start;
  cout<<"The List is:"<<endl;
  do{
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }while(ptr!=NULL);
  cout<<endl;
}
int main(){
  Head=NULL;

  int n;
  cout<<"Enter the number of element to be inserted in List:";
  cin>>n;

  int *arr;
  arr=(int*)malloc(n*sizeof(int));
  cout<<"Enter the element of the array:"<<endl;
  for(int i=0;i<n;i++){
    cout<<"Enter the value at position "<<i+1<<":";
    cin>>arr[i];
  }
  cout<<"\n\n";

  Head=CreateList(arr,0,n); //Create Linked List
  display(Head);
  cout<<"\n\n";
  
  cout<<"The List after removing duplicates is:\n";
  Remove_duplicate(Head);
  display(Head);
  return 0;
}