#include<iostream>
#include<climits>
using namespace std;
int brute(int arr[],int size,int wants){
  int height = 0;
  int result = 0;
  while(true){
    int var = 0;
    for(int i=0;i<size;i++){
      if(arr[i]>height){
        var+=arr[i]-height;
      }
    }

    if(var>=wants){
      result = height;
    }
    else{
      break;
    }
    height++;
  }
  return result;
}
int optimised(int arr[],int size,int wants){
  int max = INT_MIN;
  for(int i=0;i<size;i++){
    if(max<arr[i]){
      max = arr[i];
    }
  }
  int s = 0;
  int e = max;
  int result = 0;
  while(s<=e){
    int m = s+(e-s)/2;
    int var = 0;

    for(int i=0;i<size;i++){
      if(arr[i]>m){
        var+=arr[i]-m;  
      }
    }

    if(var>=wants){
      result = m;
      s = m+1;
    }
    else{
      e = m-1;
    }

  }

  return result;

}
int main()
{
  int arr[] = {20,17,10,15};
  int size = sizeof(arr)/sizeof(arr[0]);
  int wants = 7;
  int ans = brute(arr,size,wants);
  int ans2 = optimised(arr,size,wants);
  cout<<ans<<endl<<ans2<<endl;
}