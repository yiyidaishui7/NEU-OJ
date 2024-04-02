#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n = 0;
  cin >> n;
  
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A[i];
  
  int q = 0;
  cin >> q;
  
  int b, e, k = 0;
  for (int i = 0; i < q; i++) {
    cin >> b >> e >> k;
    int count = 0;
    for (auto it = A.begin() + b; it != A.begin() + e; it++) {
      if (*it == k) {
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}