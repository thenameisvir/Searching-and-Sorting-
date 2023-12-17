#include<iostream>
using namespace std;

int search(int arr[], int n) {
  int s = 0;
  int e = n - 1;
  int m = s + (e - s) / 2;
  int ans = -1;

  while (s <= e) {
    if (s == e) {
      return s;
    }

    if (m & 1) {
      if (m - 1 >= 0 && arr[m] == arr[m - 1]) {
        s = m + 1;
      } else {
        e = m - 1;
      }
    } else {
      if (m + 1 < n && arr[m] == arr[m + 1]) {
        s = m + 2;
      } else {
        e = m;
      }
    }

    m = s + (e - s) / 2;
  }

  return ans;
}

int main() {
  int n;
  cin >> n;
  int arr[100];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int ans = search(arr, n);
  cout << "Unique Element is  " << arr[ans] << endl;

  return 0;
}
