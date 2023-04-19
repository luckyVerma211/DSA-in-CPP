#include<iostream>
using namespace std;
void sort(int A[], int n){
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<n-i;j++){
            if(A[j]<A[j+1]){
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
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
    //Function Call
    sort(A,n);
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    return 0;
}