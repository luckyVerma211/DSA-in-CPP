#include<iostream>
using namespace std;
int Sqrt(int x){
  if(x<2)
    return x;
  int start=0;
  int end=x;
  int mid,ans;
  while(start<=end){
    mid=start+(end-start)/2;
    if(mid==x/mid)
      return mid;
    else if(mid<x/mid){
      ans=mid;
      start=mid+1;
    }
    else
      end=mid-1;
  }
  return ans;
}
int main(){
  int n;
  cout<<"Enter the number whose square root to be calculated:";
  cin>>n;
  int res=Sqrt(n);
  cout<<"The square root is: "<<res;
  return 0;
}
