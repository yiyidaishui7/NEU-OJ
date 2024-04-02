#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  cin>>arr[i];
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    int k;
    cin >> k;
    if (binary_search(arr.begin(), arr.end(), k))
      cout << 1 << endl;
    else
      cout << 0 << endl;
  }
  return 0;
}