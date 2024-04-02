#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
  int n = 0;
  cin >> n;
  vector<int> A(n);
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    A[i]=j;
  }
  int q = 0;
  cin>>q;
  int flag = 0,b=0,c=0;
  for (int i = 0; i < q; i++) {
    cin >> flag>>b>>c;
    switch (flag) {
      case 0: {
      	cout<<*min_element(A.begin()+b,A.begin()+c)<<endl;
        break;
      }
      case 1: {
      	cout<<*max_element(A.begin()+b,A.begin()+c)<<endl;
        break;
      }
      default:
        break;
    }
  }


  return 0;
}