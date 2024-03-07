#include<iostream>
using namespace std;
/*void sort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;i++){
      if(arr[i]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
}*/
int Cows(int stalls[],int n,int k){
  int start=1;
  int end,mid,ans;
  end=stalls[n-1]-stalls[0];
  while(start<=end){
    mid=start+(end-start)/2;
    int count=1,pos=stalls[0];
    for(int i=1;i<n;i++){
      if(pos+mid<=stalls[i]){
        count++;
        pos=stalls[i];
      }
    }
    if(count<k)
      end=mid-1;
    else{
      ans=mid;
      start=mid+1;
    }
  }
  return ans;
}
int main(){
  int stalls[]={1,2,4,8,9};
  int n=sizeof(stalls)/sizeof(stalls[0]);
  //sort(stalls,n);   //Sorting the array of stalls
  int k=3;
  int res=Cows(stalls,n,k);
  cout<<"The minimum distance possible between two cows is: "<<res<<endl;
  return 0;
}