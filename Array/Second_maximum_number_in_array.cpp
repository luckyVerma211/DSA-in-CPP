#include<iostream>
using namespace std;
int second_max(int arr[],int n){
  int fir_max=INT_MIN;
  int sec_max=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i]>fir_max)
      fir_max=arr[i];
  }

  for(int i=0;i<n;i++){
    if(arr[i]!=fir_max)
      sec_max=max(sec_max,arr[i]);
  }
  return sec_max;
}
int main(){
  int arr[10]={29,56,78,34,10,92,45,83,71,64};
  int n=sizeof(arr)/sizeof(arr[0]);
  int s_max=second_max(arr,n);
  cout<<"The second largest element in the array is: "<<s_max<<endl;
  return 0;
}
