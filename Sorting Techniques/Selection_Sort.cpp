#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
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

  selection_sort(arr,n);

  cout<<"Array after sorting:\n";
  for(int i=0;i<n;i++)
    cout<<arr[i]<<' ';
  cout<<endl;
  return 0;
}
