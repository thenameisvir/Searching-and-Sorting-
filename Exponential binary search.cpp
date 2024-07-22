#include<iostream>
using namespace std;
int binary(int arr[],int s,int e,int target)
{
  while(s<=e){
    int m = s+(e-s)/2;
    if(arr[m]==target){
      return m;
    }
    else if(arr[m]>target){
      e = m-1;
    }
    else{
      s = m+1;
    }
  }
  return -1;
}
int exponential_search(int arr[],int size,int target)
{
  if(size==0) return -1;
  if(arr[0]==target) return 0;
  if(arr[size-1]==target) return size-1;
  int index = 1;
  while(index<size && arr[index]<target){
    index*=2;
  }

  return binary(arr,index/2,min(index,size-1),target);

}
int main()
{
  int arr[20] = {1,3,5,7,9,10,13,16,18,10,24,26};
  int size = 12;
  int target = 26;
  int ans = exponential_search(arr,size,target);
  cout<<ans<<endl;
}