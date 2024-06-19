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

Node* Rotate_List(int k,int n){
    if(Head==NULL || Head->next==NULL)
      return Head;
    if(k==0)
      return Head;
    
    n-=k;
    Node *curr,*prev;
    curr=Head;
    prev=NULL;
    while(n--){
      prev=curr;
      curr=curr->next;
    }
    prev->next=NULL;

    Node *tail=curr;
    while(tail->next!=NULL)
      tail=tail->next;
    tail->next=Head;
    Head=curr;
    return Head;
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

  int n,k;
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
  
  cout<<"Enter the number of rotation to be made: ";
  cin>>k;
  k=k%n;
  Head=Rotate_List(k,n);
  
  cout<<"\n\nThe Rotated List is:\n";
  display(Head);
  return 0;
}