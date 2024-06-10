/* arr={6,4,5,-3,2,8}
prefix sum={6,10,15,12,14,22}
suffix sum={22,16,12,7,10,8}    */
#include<iostream>
using namespace std;
int main(){
  int arr[]={6,4,5,-3,2,8};
  int prefix[6],suffix[6];
  int n=sizeof(arr)/sizeof(arr[0]);

  prefix[0]=arr[0];
  for(int i=1;i<n;i++)
    prefix[i]=prefix[i-1]+arr[i];
  
  suffix[n-1]=arr[n-1];
  for(int i=n-2;i>=0;i--)
    suffix[i]=suffix[i+1]+arr[i];
  
  cout<<"The prefix sum of the array is: "<<endl;
  for(int i=0;i<n;i++)
    cout<<prefix[i]<<" ";
  cout<<endl;
  cout<<"The suffix sum of the array is: "<<endl;
  for(int i=0;i<n;i++)
    cout<<suffix[i]<<" ";
  cout<<endl;
  return 0;
}