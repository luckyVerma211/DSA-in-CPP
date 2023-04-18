#include<iostream>
using namespace std;
int main(){
    int A[100],n,temp;
    cout<<"Enter the number of element in array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    cout<<"The original array is:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            temp=A[i];
            A[i]=A[i+1];
            A[i+1]=temp;
        }
    }    
    cout<<"The interchanged array is:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    return 0;
}