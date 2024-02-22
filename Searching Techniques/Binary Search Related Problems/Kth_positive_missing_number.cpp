#include<iostream>
using namespace std;
int missing_num(int arr[],int n,int k){
  int start=0;
  int end=n-1;
  int num=n;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]-mid-1>=k){
      num=mid;
      end=mid-1;
    }
    else
      start=mid+1;
  }
  num=num+k;
  return num;
}
int main(){
  int arr[]={2,3,4,7,11,12,14};
  int n=sizeof(arr)/sizeof(arr[0]);
  int k;
  cout<<"Enter the kth missing positive integer:";
  cin>>k;
  int num=missing_num(arr,n,k);
  cout<<"The missing "<<k<<"th element is: "<<num;
  return 0;
}