#include <iostream>
#include <algorithm>
#include <bitset>
#include <vector>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k,bi,q,flag,m;
    bitset<64> b;
    cin >> n;
    vector<bitset<64>> masks(n);
    for (int i = 0; i < n; i++)
    {
        masks[i].reset();
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> bi;
            masks[i][bi]=1;
        }
    }
    cin >> q;
    for (int j = 0; j < q; j++)
    {
        cin >> flag >> m;
        switch (flag)
        {
            case 0:
            {
                cout << b[m] << endl;
                break;
            }
            case 1:
            {
                b |= masks[m];
                break;
            }
            case 2:
            {
                b &= ~masks[m];
                break;
            }
            case 3:
            {
                b ^= masks[m];
                break;
            }
            case 4:
            {
                cout << (((b & masks[m]) == masks[m]) ? 1 : 0) << endl; // 全打开
                break;
            }
            case 5:
            {
                cout << (((b & masks[m]).any()) ? 1 : 0) << endl; // 不是全关
                break;
            }
            case 6:
            {
                cout << (((b & masks[m]) == 0) ? 1 : 0) << endl;
                break;
            }
            case 7:
            {
                cout << (b & masks[m]).count() << endl;
                break;
            }
            case 8:
            {
                cout << (b & masks[m]).to_ullong() << endl;
                break;
            }
            default:
                break;
        }
    }
    return 0;
}