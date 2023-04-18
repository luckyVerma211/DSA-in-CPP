#include<iostream>
using namespace std;
int main(){
    int A[100],n,inc=0,dec=0;
    cout<<"Enter the number of element in array:";
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    cout<<"The original array is:";
    for(int i=0; i<n;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    for(int j=0;j<n-1;j++){
        if(A[j]<A[j+1]){
            inc++;
        }
        else if(A[j]>A[j+1]){
            dec++;
        }
    }
    cout<<"inc "<<inc<<endl;
    cout<<"Dec "<<dec<<endl;
    if(inc==n-1){
        cout<<"Array is sorted in Increasing order!!";
    }
    else if(dec==n-1){
        cout<<"Array is sorted in Decreasing order!!";
    }
    else{
        cout<<"Array is not in sorted order!!";
    }
    return 0;
}