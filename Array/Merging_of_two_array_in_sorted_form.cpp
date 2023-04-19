#include<iostream>
using namespace std;
void input(int A[],int n){
    cout<<"Enter the element in sorted order!!"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
}
void output(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
}
int main(){
    int A[100],B[100],C[200],n,m;
    cout<<"Enter the number of element in first array:";
    cin>>n;
    input(A,n);
    cout<<"Enter the number of element in second array:";
    cin>>m;
    input(B,m);
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(A[i]<B[j]){
            C[k]=A[i];
            k++;
            i++;
        }
        else{
            C[k]=B[j];
            k++;
            j++;
        }
    }
    if(i<n){
        for(;i<n;i++){
            C[k]=A[i];
            k++;
        }
    }
    else if(j<m){
        for(;j<m;j++){
            C[k]=B[j];
            k++;
        }
    }
    cout<<"The first array is:"<<endl;
    output(A,n);
    cout<<"The second array is:"<<endl;
    output(B,m);
    cout<<"The two merged array in sorted form is:"<<endl;
    output(C,k);
    return 0;
}