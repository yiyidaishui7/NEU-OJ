#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  vector<int> A(n);
  for (auto &i : A) cin >> i;
  cin >> m;
  vector<int> B(m);
  for (auto &i : B) cin >> i;
  int cnt = 0;

  for (auto i : B) {
    if (find(A.begin(), A.end(), i) != A.end()) cnt++;
  }
  if (cnt == m)
    cout << "1";
  else
    cout << "0";

  return 0;
}
//不是全对