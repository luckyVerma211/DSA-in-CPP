#include<iostream>
using namespace std;
int search(int arr[],int target,int n){
  int start=0;
  int end=n-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
      return mid;
    else if(arr[mid]>=arr[0]){
      if(arr[start]<=target && arr[mid]>=target)
        end=mid-1;
      else
        start=mid+1;
    }
    else{
      if(arr[mid]<=target && arr[end]>=target)
        start=mid+1;
      else
        end=mid-1;
    }
  }
  return -1;
}
int main(){
  int arr[]={4,5,6,7,0,1,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target;
  cout<<"Enter the element to be searched:";
  cin>>target;
  int num=search(arr,target,n);
  if(num==-1)
    cout<<"Element not found in the array!!";
  else
    cout<<"Element found at index "<<num;
  return 0;
}