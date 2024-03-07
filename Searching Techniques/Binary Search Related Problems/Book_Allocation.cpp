//Same code is valid for Painter partition and Ship packages problems
/*
#Every student get atleast 1 book.
#Book will be allocated in contigous way.
#Out of all permutation student with most number of books get minimum pages.
e.g. arr={12,34,67,90}; N=2; ans=113
arr={5,10,30,20,15}; N=3; ans=35
*/
#include<iostream>
using namespace std;
int minimum_page(int arr[],int n, int M){
  int start=0;
  int end=0;
  for(int i=0;i<n;i++){
    if(arr[i]>start)
      start=arr[i];
    end+=arr[i];
  }
  int mid,ans;
  while(start<=end){
    mid=start+(end-start)/2;
    int page=0,count=1;
    for(int i=0;i<n;i++){
      page+=arr[i];
      if(page>mid){
        count++;
        page=arr[i];
      }
    }
    if(count<=M){
      ans=mid;
      end=mid-1;
    }
    else
      start=mid+1;
  }
  return ans;
}
int main(){
  int arr[]={5,10,30,20,15};
  int n=sizeof(arr)/sizeof(arr[0]);
  int M=3; // Number of persons to whom books to be allocated

  int res=minimum_page(arr,n,M);
  cout<<"The minimum number of pages can be allocated is: "<<res<<endl;
  return 0;
}