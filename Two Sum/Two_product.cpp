/*Given sorted array: arr={2,7,11,15,27} 
also tagert=22
Ouput:(7,15)*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>product(int arr[],int n,int target){
  vector<int>ans;
  int start=0;
  int end=n-1;
  while(start<end){
    if(arr[start]==target/arr[end]){
      ans.push_back(arr[start]);
      ans.push_back(arr[end]);
      break;
    }
    else if(arr[start]<target/arr[end])
      start++;
    else
      end--;
  }
  return ans;
}
int main(){
  int arr[]={3,7,8,11,25};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=56;

  vector<int>ans=product(arr,n,target);
  cout<<ans[0]<<","<<ans[1];
  return 0;
}