#include<iostream>
using namespace std;
int binary_search(int arr[],int key,int n){
  int start=0;
  int end=n-1;
  while(start<=end){
    int mid=(start+end)/2; //int mid=start+(end-start)/2;
    if(arr[mid]==key)
      return mid;
    else if(arr[mid]>key)
      end=mid-1;
    else
      start=mid+1;
  }
  return -1;
}
int main(){
  int arr[10]={6,19,22,34,44,57,61,72,83,95};
  int key;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter the element to be searched in array:";
  cin>>key;

  int idx=binary_search(arr,key,n);
  if(idx==-1)
    cout<<"Element not found in the array!!";
  else
    cout<<"Element found at index "<<idx<<"!!";
  return 0;
}