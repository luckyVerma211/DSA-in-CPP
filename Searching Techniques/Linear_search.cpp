#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int x){
  int idx=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==x){
      return i;
      break;
    }
  }
  return idx;
}
int main(){
  int arr[10]={5,99,45,67,28,74,56,10,89,23};
  int n,x;
  //size of array
  n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter the number to be searched:";
  cin>>x;
  int idx=linear_search(arr,n,x);
  if(idx==-1)
    cout<<"Element not found in the array!!"<<endl;
  else
    cout<<"Element "<<x<<" is present at index "<<idx<<" of the array!!"<<endl;
  return 0;
}
