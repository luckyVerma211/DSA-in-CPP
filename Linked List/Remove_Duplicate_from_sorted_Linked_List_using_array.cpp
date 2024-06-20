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


//Removing duplicates using array
void Remove_duplicate(Node *head){
  vector<int>arr;
  arr.push_back(head->data);
  Node *ptr=head->next;
  while(ptr!=NULL){
    if(arr[arr.size()-1]!=ptr->data)
      arr.push_back(ptr->data);
    ptr=ptr->next;
  }
  ptr=head;
  int idx=0;
  while(idx<arr.size()){
    ptr->data=arr[idx];
    if(idx==arr.size()-1){
      ptr->next=NULL;
      return;
    }
    idx++;
    ptr=ptr->next;
  }
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