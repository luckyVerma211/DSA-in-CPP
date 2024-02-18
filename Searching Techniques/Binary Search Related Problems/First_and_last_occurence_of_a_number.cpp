#include<iostream>
using namespace std;
int first_occurence(int arr[],int n,int target){
  int start=0;
  int end=n-1;
  int first=-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
      first=mid;
      end=mid-1;
    }
    else if(arr[mid]<target)
      start=mid+1;
    else
      end=mid-1;
  }
  return first;
}
int last_occurence(int arr[],int n,int target){
  int start=0;
  int end=n-1;
  int last=-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
      last=mid;
      start=mid+1;
    }
    else if(arr[mid]<target)
      start=mid+1;
    else
      end=mid-1;
  }
  return last;
}
int main(){
  int arr[10]={1,2,3,3,3,3,3,7,8,9};
  int target;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Enter the number whose index to be searched:";
  cin>>target;
  int first=first_occurence(arr,n,target);
  if(first==-1)
    cout<<"Number not present in the array!!\n";
  else{
    int last=last_occurence(arr,n,target);
    cout<<"The first occurence of the number is: "<<first<<"\n";
    cout<<"The last occurence of the number is: "<<last<<"\n";
  }
  return 0;
}
