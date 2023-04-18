#include<iostream>
using namespace std;
int main(){
    int A[100],n,count=0;
    cout<<"Enter the number of element to be entered:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the number:";
        cin>>A[i];
    }
    for(int k=0;k<n;k++){
        if(A[k]%5==0){
            count++;
        }
    }
    cout<<"The array is:";
    for(int i=0;i<n;i++){
        cout<<A[i]<<'\t';
    }
    cout<<endl;
    cout<<"The number of element divisible by 5 is:"<<count<<endl;
    return 0;

}
