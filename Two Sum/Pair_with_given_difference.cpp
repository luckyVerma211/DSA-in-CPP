/*Given sorted array: arr={2,3,5,10,50,80} 
also tagert=45
Ouput:(5,50))*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>difference(int arr[],int n,int target){
  vector<int>ans;
  int start=0;
  int end=1;
  while(end<n){
    if((arr[end]-arr[start])==target){
      ans.push_back(arr[start]);
      ans.push_back(arr[end]);
      break;
    }
    else if(arr[end]-arr[start]>target)
      start++;
    else
      end++;
  }
  return ans;
}
int main(){
  int arr[]={2,3,5,10,50,80};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=45;

  vector<int>ans=difference(arr,n,target);
  cout<<ans[0]<<","<<ans[1];
  return 0;
}