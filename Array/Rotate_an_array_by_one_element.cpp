#include<iostream>
using namespace std;
void rotate_arr(int arr[],int n){
  int temp=arr[n-1];
  for(int i=n-2;i>=0;i--)
    arr[i+1]=arr[i];
  arr[0]=temp;
}
int main(){
  int arr[]={2,7,4,11,5,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"The initial array is:";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;

  rotate_arr(arr,n);
  cout<<"The rotated array is:";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}