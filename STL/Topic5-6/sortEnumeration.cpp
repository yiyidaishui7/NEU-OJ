#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 1; i <= n; i++) arr[i - 1] = i;
  do {
    for (auto& i : arr) cout << i << " ";
    cout << endl;

  } while (next_permutation(arr.begin(), arr.end()));
  return 0;
}