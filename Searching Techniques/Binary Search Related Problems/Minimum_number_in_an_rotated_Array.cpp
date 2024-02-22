#include<iostream>
using namespace std;
int min_num(int arr[],int n){
  int start=0;
  int end=n-1;
  int min=arr[0];
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]>=arr[0])
      start=mid+1;
    else{
      min=arr[mid];
      end=mid-1;
    }
  }
  return min;
}
int main(){
  int arr[]={6,8,10,2,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  int num=min_num(arr,n);
  cout<<"The minimum Element in the array is: "<<num;
  return 0;
}