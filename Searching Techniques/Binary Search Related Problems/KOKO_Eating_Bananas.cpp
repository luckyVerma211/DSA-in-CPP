/*
piles={3,6,11,7} These are number of bananas in each pile
H=8hrs, KOKO should finish all the bananas within H hrs
Determine the speed of KOKO to finish the complete banana,
if speed= 4banana/hrs , then it will take 3 complete hours to finish 11 bananas
*/
#include<iostream>
using namespace std;
int hours(int piles[],int n,int h){
  int start=0,end=0;
  int mid,ans;
  long long int sum=0;
  for(int i=0;i<n;i++){
    sum+=piles[i];
    end=max(end,piles[i]);
  }
  start=sum/h;
  if(!start)
    start=1;
  while(start<=end){
    mid=start+(end-start)/2;
    int total_time=0;
    for(int i=0;i<n;i++){
      total_time+=piles[i]/mid;
      if(piles[i]%mid)
        total_time++;
    }
    if(total_time>h){
      start=mid+1;
    }
    else{
      ans=mid;
      end=mid-1;
    }
  }
  return ans;
}
int main(){
  int arr[]={3,6,11,7};
  int n=sizeof(arr)/sizeof(arr[0]);
  int h=8;
  int res=hours(arr,n,h);
  cout<<"The speed of KOKO eating bananas per hour is: "<<res<<endl;
  return 0;
}