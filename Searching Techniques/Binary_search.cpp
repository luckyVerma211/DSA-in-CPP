#include<iostream>
using namespace std;
int main(){
    int A[100],n,search;
    int beg=0,mid;
    cout<<"Enter the number of element in Array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    cout<<"Enter the number to be searched:";
    cin>>search;
    //Assuming Array is in sorted order
    int end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(A[mid]==search){
            cout<<"Element found at position:"<<mid<<endl;
            break;
        }
        else if(search>A[mid]){
            beg=mid+1;
        }
        else if(search<A[mid]){
            end=mid-1;
        }
    }
    if(beg>end){
        cout<<"Element not found in Array!!"<<endl;
    }
    return 0;
}