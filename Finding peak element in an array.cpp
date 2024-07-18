#include<iostream>
using namespace std;
int peak(int arr[],int size){
int s = 0;
int e = size-1;
int m = s+(e-s)/2;
while(s<e){
  if(arr[m]<arr[m+1]){
    s = m+1;

  }
  else{
    e = m;
  }
  m = s+(e-s)/2;
}
return e;
}
int main(){
  int arr[10] = {1,2,3,1,0};
  int size = 5;
  int ans = peak(arr,size);
  cout<<ans<<endl;
}