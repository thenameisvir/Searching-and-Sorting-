#include<iostream>
using namespace std;
int findunique(int arr[],int size){
  int s = 0;
  int e = size-1;

  while(s<=e){
    if(s==e) return s;
    int m = s+(e-s)/2;

    if(m&1){
      if(arr[m]==arr[m-1] && m-1>=0){
        s = m+1;
      }
      else{
        e = m-1;
      }
    }
    else{
      if(arr[m]==arr[m+1] && m+1<size){
        s = m+2;
      }
      else{
        e = m;
      }
    }
  }
    

  return -1;

}
int main()
{
  int arr[20] = {1,1,2,2,3,3,2,4,4,5,5};
  int size = 11;
  int ans = findunique(arr,size);
  cout<<ans<<endl;

}