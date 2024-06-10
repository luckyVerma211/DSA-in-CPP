//Divide a array int two subarrays such that sum of both subarrays are equal
#include<iostream>
using namespace std;
int divide(int arr[],int n){
  int prefix=0,total_sum=0;
  for(int i=0;i<n;i++)
    total_sum+=arr[i];
  
  for(int i=0;i<n;i++){
    prefix+=arr[i];
    int ans=total_sum-prefix;
    if(ans==prefix)
      return i;
  }
  return -1;
}
int main(){
  int n,arr[100];
  cout<<"Enter the size of array:";
  cin>>n;
  cout<<"Enter the element of array\n";
  for(int i=0;i<n;i++){
    cout<<"Enter the element:";
    cin>>arr[i];
  }
  int idx=divide(arr,n);
  if(idx==-1)
    cout<<"Array cann't be divided!!\n";
  else{
    cout<<"The subarrays are:\n";
    for(int i=0;i<n;i++)
      if(i==idx)
        cout<<arr[i]<<"   ";
      else
        cout<<arr[i]<<" ";
  }
  return 0;
}