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
    int n = 0, q = 0;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        cin >> m;
        s.insert(m);
    }
    cin >> q;
    set<int> t;
    for (int i = 0; i < q; i++)
    {
        int m = 0;
        cin >> m;
        t.insert(m);
    }
    int cnt = 0;
    auto iti = s.begin();
    auto itj = t.begin();
    while (iti != s.end() && itj != t.end())
    {
        if (*iti == *itj)
        {
            iti++;
            itj++;
            cnt++;
        }
        else if (*iti > *itj)
        {
            itj++;
        }
        else
        {
            iti++;
        }
    }
    cout << cnt;
    return 0;
}
