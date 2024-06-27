#include<iostream>
using namespace std;
class Stack{
  int *arr;
  int size;
  int top;
  public:
    Stack(int s){
      size=s;
      top=-1;
      arr=new int[s];
    }
    void push(int value){
      if(top==size-1){
        cout<<"Stack Overflow!!"<<endl;
        return;
      }
      top++;
      arr[top]=value;
      cout<<"Push operation performed successfully!!\n";
    }
    void pop(){
      if(top==-1){
        cout<<"Stack Underflow!!"<<endl;
        return;
      }
      top--;
      cout<<"Pop operation performed successfully!!\n";
    }
    int peek(){
      if(top==-1){
        cout<<"Stack is Empty!!"<<endl;
        return -1;
      }
      return arr[top];
    }
    bool isEmpty(){
      if(top==-1)
        return 1;
      else  
        return 0;
    }
    int isSize(){
      //Return number of element in the stack
      return top+1;
    }
    void display(){
      if(top==-1){
        cout<<"Stack is Empty!!\n";
        return;
      }
      cout<<"The Stack is: "<<endl;
      for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
};
int main(){
  int n,ch,val;
  cout<<"Enter the size of Stack:";
  cin>>n;
  Stack S(n);
  cout<<endl<<endl;
  do{
    cout<<"Press 1 - To Push Element into Stack\n";
    cout<<"Press 2 - To Pop Element from the Stack\n";
    cout<<"Press 3 - To fetch Peek value from the Stack\n";
    cout<<"Press 4 - To Check whether Stack is Empty or not\n";
    cout<<"Press 5 - To Check the Size of the List\n";
    cout<<"Press 6 - To display the Stack\n";
    cout<<"Press 7 - To Exit\n\n";
    cout<<"Enter the choice:";
    cin>>ch;
    if(ch==1){
      cout<<"Enter the value to be pushed:";
      cin>>val;
      S.push(val);
    }
    else if(ch==2)
      S.pop();
    else if(ch==3){
      val=S.peek();
      if(val!=-1)
        cout<<"The peek value is: "<<val<<endl;
    }
    else if(ch==4){
      val=S.isEmpty();
      if(val==1)
        cout<<"Stack is Empty!!\n";
      else
        cout<<"Stack is not Empty!!\n";
    }
    else if(ch==5){
      val=S.isSize();
      if(val==0)
        cout<<"Stack is Empty!!\n";
      else
        cout<<"Size of the Stack is: "<<val<<endl;
    }
    else if(ch==6)
      S.display();
    else
      break;
  }while(1);
  return 0;
}
