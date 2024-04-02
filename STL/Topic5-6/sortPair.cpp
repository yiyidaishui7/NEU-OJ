#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
	// if(a.first<b.first)
	// return true;
	// else if(a.first==b.first)
	// {
		// if(a.second<b.second)
		// return true;
	// }
	// else if(a.first>b.first)
	// return false;

 if (a.first == b.first) return a.second < b.second;
  return a.first < b.first;
}

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> arr(n);
    for (auto &i : arr)
        cin >> i.first >> i.second;
        
  sort(arr.begin(), arr.end(), cmp);
  
  for (auto i : arr) cout << i.first << " " << i.second << endl;

  return 0;
}