#include<iostream>
using namespace std;
class Stack{
    private:
    int data[1000];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int val){
        top++;
        data[top]=val;
    }
    int pop(){
        if(top==-1){
            return 1;
        }
        else{
            int n=data[top];
            top--;
            return n;
        }
    }
};
int main(){
    Stack S;
    int n;
    long int fact=1;
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        S.push(i);
    }
    while(1){
        int a=S.pop();
        int b=S.pop();
        if(a!=0 || b!=0){
            int pro=a*b;
            S.push(pro);
        }
        if(a==1 || b==1){
            break;
        }
    }
    cout<<"The factorial of the number "<<n<<" is:"<<S.pop()<<endl;
    return 0;
}