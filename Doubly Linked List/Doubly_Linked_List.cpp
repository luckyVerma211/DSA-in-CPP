#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node *prev,*next;
    static int size;
    Node(int val){
      data=val;
      prev=NULL;
      next=NULL;
      size++;
    }
};
int Node::size=0;
Node *head;
void add_at_beg(int value){
  if(head==NULL){
    head=new Node(value);
    return;
  }
  Node *temp;
  temp=new Node(value);
  temp->next=head;
  head->prev=temp;
  head=temp;
}
void add_at_end(int value){
  if(head==NULL){
    head=new Node(value);
    return;
  }
  Node *ptr,*temp;
  ptr=head;
  while(ptr->next!=NULL)
    ptr=ptr->next;
  temp=new Node(value);
  ptr->next=temp;
  temp->prev=ptr;
}
void add_at_position(int value,int pos){
  if(pos==1)
    add_at_beg(value);
  else if(pos>head->size)
    add_at_end(value);
  else{
    Node *ptr,*temp;
    ptr=head;
    for(int i=0;i<pos-2;i++)
      ptr=ptr->next;
    temp=new Node(value);
    temp->next=ptr->next;
    temp->prev=ptr;
    ptr->next->prev=temp;
    ptr->next=temp;
  }
}
void delete_from_beg(){
  if(head==NULL){
    cout<<"List is Empty!!\n";
    return;
  }
  Node *temp;
  temp=head;
  head=head->next;
  delete temp;
  if(head!=NULL)
    head->prev=NULL;
}
void delete_from_end(){
  if(head==NULL){
    cout<<"List is Empty!!\n";
    return;
  }
  if(head->next==NULL){
    delete head;
    head=NULL;
    return;
  }
  Node *temp;
  temp=head;
  while(temp->next!=NULL)
    temp=temp->next;
  temp->prev->next=NULL;
  delete temp;
}
void delete_from_positon(int pos){
  if(pos==1)
    delete_from_beg();
  else if(pos==head->size)
    delete_from_end();
  else if(pos>head->size || pos<0)
    cout<<"Invalid position!!"<<endl;
  else{
    Node *ptr,*temp;
    ptr=head;
    for(int i=0;i<pos-2;i++)
      ptr=ptr->next;
    temp=ptr->next;
    ptr->next=temp->next;
    temp->next->prev=ptr;
    delete temp;
  }
}
void display(){
  Node *ptr;
  ptr=head;
  if(ptr==NULL){
    cout<<"List is Empty!!"<<endl;
    return;
  }
  cout<<"The List is: "<<endl;
  while(ptr!=NULL){
    cout<<ptr->data<<" ";
    ptr=ptr->next;
  }
  cout<<endl;
}
int main(){
  head=NULL;
  int val,pos,ch;
  do{
    cout<<"Press 1 - To add a Node at Beginning"<<endl;
    cout<<"Press 2 - To add a Node at End"<<endl;
    cout<<"Press 3 - To add a Node at given positon"<<endl;
    cout<<"Press 4 - To Display the List"<<endl;
    cout<<"Press 5 - To Delete Node from Beginning"<<endl;
    cout<<"Press 6 - To Delete Node from End"<<endl;
    cout<<"Press 7 - To Delete Node from given Position"<<endl;
    cout<<"Press 8 - To Exit"<<endl;
    cout<<"\nEnter the choice:";
    cin>>ch;
    if(ch==1){
      cout<<"Enter the value to be added:";
      cin>>val;
      add_at_beg(val);
    }
    else if(ch==2){
      cout<<"Enter the value to be added:";
      cin>>val;
      add_at_end(val);
    }
    else if(ch==3){
      cout<<"Enter the value to be added:";
      cin>>val;
      cout<<"Enter the position of the value:";
      cin>>pos;
      add_at_position(val,pos);
    }
    else if(ch==4)
      display();
    else if(ch==5)
      delete_from_beg();
    else if(ch==6)
      delete_from_end();
    else if(ch==7){
      cout<<"Enter the position of the value to be deleted:";
      cin>>pos;
      delete_from_positon(pos);
    }
    else 
      break;
  }while(1);
  return 0;
}
