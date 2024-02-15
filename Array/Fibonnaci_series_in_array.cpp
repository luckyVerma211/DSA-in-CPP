#include<iostream>
using namespace std;
void fibo(int arr[],int n){
  for(int i=2;i<n;i++)
    arr[i]=arr[i-1]+arr[i-2];
}
int main(){
  int arr[100];
  int n;
  cout<<"Enter the number to element in series:";
  cin>>n;

  arr[0]=0;
  arr[1]=1;
  fibo(arr,n);

  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  return 0;
}