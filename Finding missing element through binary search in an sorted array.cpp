#include<iostream>
using namespace std;
int findmissing(int arr[],int size){
  int s = 0;
  int e = size-1;
  int m = s+(e-s)/2;
  int ans = -1;
  while(s<=e){
    int diff = arr[m]-m;
    if(diff==1){
      s = m+1;
    }
    else{
      ans = m+1;
      e = m-1;
    }
    m = s+(e-s)/2;
  }
  return ans;
}
int main()
{
  int arr[10] = {1,2,3,4,6,7,8,9,10};
  int size = 9;
  int ans = findmissing(arr,size);
  cout<<ans<<endl;
}