#include<iostream>
using namespace std;
int search(int arr[],int n)
{
  int s = 0;
  int e = n-1;
  int m = s+(e-s)/2;
  while(s<=e){
    if(m>=0&&m%2==0){
      if(arr[m]==arr[m+1]){
        s=m+1;
      }
      if(arr[m]!=arr[m+1]){
        return m;
      }
    }
    if(m%2!=0){
      if(arr[m]==arr[m+1]){
        e=m-1;
      }
      if(arr[m]!=arr[m+1]){
        return m+1;
        
      }
    }
    m=s+(e-s)/2;
  }

}
int main()
{
  int n;
  cin>>n;
  int arr[100];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int ans = search(arr,n);
  cout<<"Unique Element is present at index: "<<ans<<endl;
}