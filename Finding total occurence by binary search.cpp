#include<iostream>
using namespace std;
int search1(int arr[],int n,int target){
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
  return ans;
}
int search2(int arr[],int n,int target){
  int start = 0;
  int end = n-1;
  int mid = start+(end-start)/2;
  int ans = 0;
  while(start<=end){
    if(arr[mid]==target){
     ans = mid;
     start = mid+1;
    }
    else if(arr[mid]>target){
      end = mid-1;
    }
    else{
      start = mid+1;
    }
    mid = start+(end-start)/2;
  }
  return ans;
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
  int ans1  = search1(arr,n,target);
  int ans2  = search2(arr,n,target);
  cout<<"Element first found at index : "<<ans1;
  cout<<endl;
  cout<<"Element last found at index : "<<ans2<<endl;
  cout<<"Total occurences of given input are "<<ans2-ans1+1<<endl;

}