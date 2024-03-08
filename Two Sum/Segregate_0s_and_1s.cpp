#include<iostream>
using namespace std;
void segregate(int arr[],int n){
  int start=0;
  int end=n-1;
  while(start<end){
    if(arr[start]==0)
      start++;
    else{
      if(arr[end]==0){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
      }
      else
        end--;
    }
  }
}
int main(){
  int arr[]={0,1,1,0,1,0,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"The inital array is:\n";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  segregate(arr,n);
  cout<<"The segregated array is:\n";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}
