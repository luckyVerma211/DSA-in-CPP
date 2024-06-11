#include <iostream>
using namespace std;
bool three_sum(int arr[],int n,int target){
  for(int i=0;i<n-3;i++){
    int ans=target-arr[i];
    int start=i+1;
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
  int arr[]={1,4,45,6,10,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=13;

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
  int val=three_sum(arr,n,target);
  if(val==1)
    cout<<"Three Sum is possible!!"<<endl;
  else 
    cout<<"Three Sum is not possible!!"<<endl;
  return 0;
}