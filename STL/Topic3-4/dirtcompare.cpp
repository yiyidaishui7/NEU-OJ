#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A[i];
  cin >> m;
  vector<int> B(m);
  int flag = 0;
  for (int i = 0; i < m; i++) cin >> B[i];
  int compareCnt = max(n, m);
  for (int i = 0; i < compareCnt; i++) {
    if (B[i] > A[i]) {
      flag = 1;
      break;
    } else if (A[i] > B[i]) {
      break;
    }
  }
	cout<<flag;
  return 0;
}