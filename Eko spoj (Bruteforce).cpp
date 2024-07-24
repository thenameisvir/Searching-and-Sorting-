#include<iostream>
#include<climits>
using namespace std;

int bruteforce(int arr[], int size, int wants) {
    int height = 0;
    int resultheight = 0;
    int maxi = INT_MAX;

    while(true){
      int var = 0;
      for(int i=0;i<size;i++){
        if(arr[i]>height){
          var+=arr[i]-height;
        }
      }

      if(var>=wants){
        resultheight = height;
      }
      else{
        break;
      }
      height++;
    }

    return resultheight;
}

int main() {
    int arr[] = {4,42,40,26,46};
    int size = 5;
    int wants = 20;

    int ans = bruteforce(arr, size, wants);
    cout << ans;

    return 0;
}
