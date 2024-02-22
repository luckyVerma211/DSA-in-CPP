#include<iostream>
using namespace std;
void rotate_arr_by_k(int arr[],int n,int k){
  for(int j=0;j<k;j++){
    int temp=arr[n-1];
    for(int i=n-2;i>=0;i--)
      arr[i+1]=arr[i];
    arr[0]=temp;
  }
}
int main(){
  int arr[]={2,7,4,11,5,8};
  int k;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter the number of rotation be performed:";
  cin>>k;
  k=k%n;
  cout<<"The initial array is:";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;

  rotate_arr_by_k(arr,n,k);

  cout<<"The rotated array is:";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}