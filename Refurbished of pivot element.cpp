#include<iostream>
using namespace std;
int pivot(int arr[10],int n){
  int s = 0;
  int e = n-1;
  int m = s+(e-s)/2;
  while(s<=e){
    if(arr[m]>arr[m+1]&&arr[m]>arr[m-1]){
      return arr[m];
    }
    else if(arr[m]<arr[m+1]&&arr[m]<arr[m-1]){
      return arr[m-1];
    }
    else if(arr[m]>arr[0]){
      s=m+1;
    }
    else {
      e=m-1;
    }
    m = s+(e-s)/2;
  }



}
int main()
{
  int n;
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans = pivot(arr,n);
  cout<<"Pivot element of this array is : "<<ans<<endl;
}