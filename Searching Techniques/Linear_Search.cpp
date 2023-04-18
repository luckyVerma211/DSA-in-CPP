#include<iostream>
using namespace std;
int main(){
    int A[100],n,sear,f=0;
    cout<<"Enter the number of element:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>sear;
    for(int t=0;t<n;t++){
        if(A[t]==sear){
            cout<<"Element found at position:"<<t<<endl;
            f++;
        }
    }
    if(f==0){
        cout<<"Element not found in the Array!!";
    }
    return 0;

}
