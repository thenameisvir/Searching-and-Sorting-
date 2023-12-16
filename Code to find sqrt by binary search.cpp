#include<iostream>
using namespace std;
int sqrt(int n){
  int s = 0;
  int e = n;
  long long int m = s+(e-s)/2;
  int ans = -1;
  while(s<=e){
    if(m*m==n){
      ans = m;
      break;
    }
    else if(m*m>n){
      e=m-1;
    }
    else{
      ans = m;
      s=m+1;
    }
    m = s+(e-s)/2;
  }
  return ans;
}
int main()
{
  int n;
  cin>>n;
  int ans = sqrt(n);
  cout<<ans;
  
}