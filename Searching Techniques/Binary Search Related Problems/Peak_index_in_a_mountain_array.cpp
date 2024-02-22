#include<iostream>
using namespace std;
int peak_index(int arr[],int n){
  int start=0;
  int end=n-1;
  int mid;
  while(start<=end){
    mid=start+(end-start)/2;
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
      return mid;
    else if(arr[mid]>arr[mid-1])
      start=mid+1;
    else
      end=mid-1;
  }
  return mid;
}
int main(){
  int arr[7]={2,4,6,8,10,8,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int idx=peak_index(arr,n);
  cout<<"The highest peak index is: "<<idx;
  return 0;
}