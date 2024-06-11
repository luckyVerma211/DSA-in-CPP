#include <iostream>
using namespace std;
bool four_sum(int arr[],int n,int target){
  for(int i=0;i<n-3;i++){
    int ans=target-(arr[i]+arr[i+1]);
    int start=i+2;
    int end=n-1;
    while(start<end){
      if(arr[start]+arr[end]==ans)
        return 1;
      else if(arr[start]+arr[end]>ans)
        end--;
      else 
        start++;
    }
  }
  return 0;
}
int main(){
  int arr[]={1,5,1,0,6,0};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=7;

  //Sort the array
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  int val=four_sum(arr,n,target);
  if(val==1)
    cout<<"Four Sum is possible!!"<<endl;
  else 
    cout<<"Four Sum is not possible!!"<<endl;
  return 0;
}