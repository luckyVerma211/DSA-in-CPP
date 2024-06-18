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
Node *Head;

//Reverse using Recursion
Node* Reverse(Node *current,Node*prev){
  if(current==NULL)
    return prev;
  Node *temp=current->next;
  current->next=prev;
  return Reverse(temp,current);
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
  
  cout<<"The Reverse of the Linked List is:\n";
  Head=Reverse(Head,NULL);
  display(Head);
  return 0;
}