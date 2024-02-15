#include<iostream>
using namespace std;
void reverse(int arr[],int n){
  int i=0,j=n-1;
  while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  }
}
int main(){
  int arr[9]={11,22,33,44,55,66,77,88,99};
  int n=sizeof(arr)/sizeof(arr[0]); //Number of element in array
  cout<<"The intitial array is:";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;

  reverse(arr,n);
  
  cout<<"The reverse of the array is:";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}