#include<iostream>
using namespace std;
int peak(int arr[],int n){
  int s = 0;
  int e = n-1;
  int m = s+(e-s)/2;
  int temp = 0;
  while(s<e){
    if(arr[m]>arr[m-1]&&arr[m]>arr[m+1]){
      return arr[m];
    }
    else if(arr[m]>arr[m-1]){
      s=m+1;
    }
    else{
      e=m;
    }
  }
  // return temp;
}
int main()
{
  int n;
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans = peak(arr,n);
  cout<<"Peak element of this array is: "<<ans<<endl;
}