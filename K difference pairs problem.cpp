#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[100];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int k;
  cin>>k;

  sort(arr,arr+n);
  int i = 0;
  int j = 1;
  int ans = 0;
  while(j<n){
    int diff = arr[j]-arr[i];
    if(i==j) j++;
    else if(diff==k){
      ans++;
      i++;
      j++;
    }
    else if(diff>k){
      i++;
    }
    else{
      j++;
    }
  }
  cout<<ans<<endl;
}