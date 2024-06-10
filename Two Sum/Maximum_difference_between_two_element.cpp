/*
Given array:[4,-6,2,8]
possible pairs: {4,-6},{4,2},{4,8}: max_difference=4
{-6,2},{-6,8} max_difference=14
{2,8} max_difference=6
ans=14
*/
#include<iostream>
using namespace std;
int main(){
  int arr[]={4,-6,2,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  int suffix=arr[n-1];
  int difference=INT_MIN;
  for(int i=n-2;i>0;i--){
    if(arr[i]>suffix)
      suffix=arr[i];
    int diff=suffix-arr[i];
    if(diff>difference)
      difference=diff;
  }
  cout<<"The maximum difference between two element is: "<<difference;
  return 0;
}