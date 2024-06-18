#include<iostream>
using namespace std;
class Node{
  public:
    int data;
    Node *next;
    static int size_of_List;
    Node(int value){
      data=value;
      next=NULL;
      size_of_List++;
    }
};
int Node::size_of_List=0;
void delete_from_beg(Node **start){
  if(*start==NULL){
    cout<<"List is Empty!!\n";
    return;
  }
  else if((*start)->next==NULL){
    delete *start;
    *start=NULL;
    return;
  }
  Node *temp;
  temp=*start;
  *start=(*start)->next;
  delete temp;
}
void delete_from_end(Node **start){
  if(*start==NULL){
    cout<<"List is Empty!!\n";
    return;
  }
  else if((*start)->next==NULL){
    delete *start;
    *start=NULL;
    return;
  }
  Node *temp;
  temp=*start;
  while(temp->next->next!=NULL)
    temp=temp->next;
  delete temp->next;
  temp->next=NULL;
}
void delete_from_pos(Node **start,int pos){
  if(*start==NULL)
    cout<<"List is Empty!!"<<endl;
  else if(pos==1)
    delete_from_beg(&(*start));
  else if(pos==(*start)->size_of_List)
    delete_from_end(&(*start));
  else if(pos>(*start)->size_of_List || pos<1)
    cout<<"Invalid position of List!!"<<endl;
  else{
    Node *temp,*ptr;
    ptr=*start;
    for(int i=1;i<=pos-2;i++)
      ptr=ptr->next;
    temp=ptr->next;
    ptr->next=temp->next;
    delete temp;
  }
}
void addNode(Node **start,int value){
  Node *temp,*ptr;
  ptr=*start;
  temp=new Node(value);
  if(ptr==NULL)
    *start=temp; 
  else{
    while(ptr->next!=NULL)
      ptr=ptr->next;
    ptr->next=temp;
  }
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
  int ch,val,pos;
  do{
    cout<<"Press 1 - To Add a Node"<<endl;
    cout<<"Press 2 - To Delete from Beginning"<<endl;
    cout<<"Press 3 - To Delete from End"<<endl;
    cout<<"Press 4 - To Delete from Position"<<endl;
    cout<<"Press 5 - To Display the List"<<endl;
    cout<<"Press 6 - To Exit\n"<<endl;
    cout<<"Enter the choice: ";
    cin>>ch;
    if(ch==1){
      cout<<"Enter the number to be added:";
      cin>>val;
      addNode(&Head,val);
    }
    else if(ch==2)
      delete_from_beg(&Head);
    else if(ch==3)
      delete_from_end(&Head);
    else if(ch==4){
      cout<<"Enter the position whose value to be deleted:";
      cin>>pos;
      delete_from_pos(&Head,pos);
    }
    else if(ch==5)
      display(&Head);
    else 
      break;
  }while(1);
  return 0;
}