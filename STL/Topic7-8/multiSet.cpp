#include <iostream>
#include <set>
#include <algorithm>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int q, x;
    multiset<int> S;
    for (int i = 0; i < n; i++)
    {
        cin >> q >> x;
        switch (q)
        {
        case 0:
        {
            S.insert(x);
            cout << S.size() << endl;
            break;
        }
        case 1:
        {
            cout << S.count(x) << endl;
            break;
        }
        case 2:
        {
            S.erase(x);
            break;
        }
        case 3:
        {

            int R;
            cin >> R;
            int L = x;
            auto lower = S.lower_bound(L);
            auto upper = S.upper_bound(R);
            for (auto it = lower; it != upper; it++)
            {
                cout << *it << endl;
            }
            break;
        }
        default:
            break;
        }
    }
    return 0;
}