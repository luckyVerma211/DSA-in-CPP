/*
Given array={4,-6,2,8}
subarrays: {4},{-6},{2},{8} maxsum=8
{4,-6},{-6,2},{2,8} maxsum=10
{4,-6,2},{-6,2,8}   maxsum=4
{4,-6,2,8}      maxsum=8
ans = 10 i.e.{2,8}
*/
/*Using Kadane's Algorithm
array: 4 -6 2 8
prefix: 4 0 2 10
max=10 */
#include<iostream>
using namespace std;
int main(){
  int arr[]={3,4,-5,8,-12,7,6,-2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int max=INT_MIN,prefix=0;
  for(int i=0;i<n;i++){
    prefix+=arr[i];
    if(prefix<0)
      prefix=0;
    if(prefix>max)
      max=prefix;
  }
  cout<<"The maximum sum of the array is: "<<max;
  return 0;
}