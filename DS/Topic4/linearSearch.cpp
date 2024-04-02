#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n = 0, q = 0;
    cin >> n;
    // vector<int> s(n);
    // for (auto &i : s)
    //     cin >> i;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        cin >> m;
        s.insert(m);
    }
    cin >> q;
    // vector<int> t(q);
    // for (auto &i : t)
    //     cin >> i;
    set<int> t;
    for (int i = 0; i < q; i++)
    {
        int m = 0;
        cin >> m;
        t.insert(m);
    }
    int cnt = 0;

    // int num = n < q ? n : q;

    for (auto i : s)
    {
        for (auto j : t)
        {
            if (i == j)
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
