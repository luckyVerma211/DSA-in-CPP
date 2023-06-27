#include<iostream>
using namespace std;
class Stack{
    private:
    int data[10];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int val){
        if(top==9){
            cout<<"Overflow!!"<<endl;
        }
        else{
            top++;
            data[top]=val;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"Underflow!!"<<endl;
            return 0;
        }
        else{
            int n=data[top];
            top--;
            return n;
        }
    }
    void display(){
        if(top==-1){
            cout<<"Stack is empty!!"<<endl;
        }
        else{
            for(int i=0;i<=top;i++){
                cout<<data[i]<<'\t';
            }
        }
    }
};

int main(){
    Stack S;
    while(1){
        cout<<"Press 1 - To Push an element"<<endl;
        cout<<"Press 2 - To Pop an element"<<endl;
        cout<<"Press 3 - To Display the Stack"<<endl;
        cout<<"Press 4 - To Break"<<endl;
        int ch;
        cout<<"Enter your choice:";
        cin>>ch;
        if(ch==1){
            int a;
            cout<<"Enter the element to be added:";
            cin>>a;
            S.push(a);
            cout<<"Element added successfully!!"<<endl;
        }
        else if(ch==2){
            int a=S.pop();
            cout<<"The element poped is:"<<a<<endl;
        }
        else if(ch==3){
            cout<<"The Stack is:";
            S.display();
            cout<<endl;
        }
        else
            break;
    }
    return 0;
}
