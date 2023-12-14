#include <iostream>
using namespace std;
int missing(int arr[],int n){
  int s = 0;
  int e = n-1;
  int m = s+(e-s)/2;
  int temp = 0;
  while(s<=e){
    int diff = arr[m]-m;
    if(diff==1){
      s=m+1;
    }
    else if(diff==2){
      temp = m;
      e=m-1;
    }
    m = s+(e-s)/2;
  }
  return temp+1;
}
int main() {
  int n;
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans = missing(arr,n);
  cout<<ans<<" ";
  return 0;
}