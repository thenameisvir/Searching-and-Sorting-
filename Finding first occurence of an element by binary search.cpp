#include<iostream>
using namespace std;
int search(int arr[],int n,int target){
  int start = 0;
  int end = n-1;
  int mid = start+(end-start)/2;
  int ans = 0;
  while(start<=end){
    if(arr[mid]==target){
      ans = mid;
      end = mid-1;
    }
    else if(arr[mid]>target){
      end = mid-1;
    }
    else{
      start = mid+1;
    }
    mid = start+(end-start)/2;
  }
}
int main()
{
  int n;
  cin>>n;
  int target;
  cin>>target;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans  = search(arr,n,target);
  cout<<ans<<" ";
}