#include<iostream>
using namespace std;
int main(){
    int A[100],n;
    cout<<"Enter the number of element in array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    cout<<"The original array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]>A[j]){
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    return 0;
}