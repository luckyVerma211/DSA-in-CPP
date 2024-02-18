/*class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int idx=nums.size();
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>=target){
                idx=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return idx;
    }
};*/
#include<iostream>
using namespace std;
int searchInsert(int arr[],int target,int n){
  int start=0;
  int end=n-1;
  int idx=n;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==target){
      idx=mid;
      break;
    }
    else if(arr[mid]<target)
      start=mid+1;
    else{
      idx=mid;
      end=mid-1;
    }
  }
  return idx;
}
int main(){
  int arr[10]={6,19,22,34,44,57,61,72,83,95};
  int target;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter the number:";
  cin>>target;
  int idx=searchInsert(arr,target,n);
  cout<<"The number index should be: "<<idx;
  return 0;
}