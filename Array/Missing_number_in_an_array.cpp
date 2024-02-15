#include<iostream>
using namespace std;
int missing_num(int arr[],int n){
  int arr_sum=0;
  for(int i=0;i<n;i++)
    arr_sum+=arr[i];
  int num_sum=(n+1)*(n+2)/2;
  return num_sum-arr_sum;
}
int main(){
  int arr[10]={1,9,11,4,6,7,2,5,3,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  int mis_num=missing_num(arr,n);
  cout<<"The missing element in the array is:"<<mis_num<<endl;
  return 0;
}