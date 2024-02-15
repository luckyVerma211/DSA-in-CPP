#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
  for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
      if(arr[j]<arr[j-1]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
      }
      else
        break;
    }
  }
}
int main(){
  int arr[100],n;
  cout<<"Enter the element in the array:";
  cin>>n;
  cout<<"Enter the element in the array\n";
  for(int i=0;i<n;i++){
    cout<<"Enter the value at position "<<i+1<<":";
    cin>>arr[i];
  }
  cout<<"Array before sorting:\n";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<' ';
  cout<<endl;

  insertion_sort(arr,n);

  cout<<"Array after sorting:\n";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<' ';
  cout<<endl;
  return 0;
}