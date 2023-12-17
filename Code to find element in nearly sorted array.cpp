#include<iostream>
using namespace std;
int search(int arr[],int n,int target){
  int s = 0;
  int e = n-1;
  int m = s+(e-s)/2;
  int ans = -1;
  while(s<=e){
    if(m-1>=0&&arr[m-1]==target){
      return m-1;
    }
    else if(m+1<=n-1&&arr[m+1]==target){
      return m+1;
    }
    else if(arr[m]==target){
      return m;
    }
    else if(target>arr[m]){
      s=m+2;

    }
    else{
      e=m-2;
    }
    m=s+(e-s)/2;
  }
  // return ans;
}
int main()
{
  int n;
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cin>>target;
  int ans = search(arr,n,target);
  cout<<"Element found at index: "<<ans<<endl;
}