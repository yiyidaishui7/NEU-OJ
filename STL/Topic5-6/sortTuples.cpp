#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>
using namespace std;

bool cmp(tuple<int, int, char, string, string> &a,
         tuple<int, int, char, string, string> &b)
{
  if (get<0>(a) == get<0>(b))
  {
    if (get<1>(a) == get<1>(b))
    {
      if (get<2>(a) == get<2>(b))
      {
        if (get<3>(a) == get<3>(b))
          return get<4>(a) < get<4>(b);
        else
          return get<3>(a) < get<3>(b);
      }

      else
        return get<2>(a) < get<2>(b);
    }
    else
      return get<1>(a) < get<1>(b);
  }
  else
    return get<0>(a) < get<0>(b);
}

int main(void)
{
  int n;
  cin >> n;
  vector<tuple<int, int, char, string, string>> arr(n);
  for (auto &i : arr)
    cin >> get<0>(i) >> get<1>(i) >> get<2>(i) >> get<3>(i) >> get<4>(i);
  sort(arr.begin(), arr.end(), cmp);
  for (auto i : arr)
    cout << get<0>(i) << " " << get<1>(i) << " " << get<2>(i) << " "
         << get<3>(i) <<" "<< get<4>(i) << endl;


  return 0;
}