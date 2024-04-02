#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n = 0,q=0;
  cin >> n;
  vector<int> A(n);
  for(auto&i:A)cin>>i;
  cin >> q;
  int b = 0, e = 0;
  for (int i = 0; i < q; i++) {
    cin >> b >> e;
    reverse(A.begin() + b, A.begin() + e );
  }
  for(auto& i:A){
  	if(i!=A.back())
  	cout<<i<<" ";
  	else
  	cout<<i<<endl;
  }
  // if (A.empty())
    // cout << endl;
  // else {
    // for (vector<int>::iterator it = A.begin(); it != A.end(); it++) {
      // if (next(it) != A.end()) {
        // cout << *it << " ";
// 
      // } else
        // cout << *it << endl;
    // }
  // }
  return 0;
}