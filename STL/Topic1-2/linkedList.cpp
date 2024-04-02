#include <iostream>
#include <list>
using namespace std;
int main()
{
    int n = 0, q = 0;
    cin >> n >> q;
    list<int> L[n];
    int flag = 0;
    for (int i = 0; i < q; i++)
    {
        cin >> flag;
        switch (flag)
        {
        case 0:
        {
            int t = 0, x = 0;
            cin >> t >> x;
            L[t].push_back(x);
            break;
        }
        case 1:
        {
            int t = 0;
            cin >> t;
            if (L[t].empty())
            {
                cout << endl;
                break;
            }
            else
            {
                for (list<int>::iterator it = L[t].begin(); it != L[t].end(); it++)
                {
                    if (next(it) != L[t].end())
                        cout << *it << " ";
                    else
                        cout << *it << endl;
                }
                break;
            }
        }
        case 2:
        {
            int s = 0, t = 0;
            cin >> s >> t;
            if (L[s].empty())
                break;
            L[t].splice(L[t].end(), L[s]);
            L[s].clear();
            break;
        }
        default:
            break;
        }
    }
    return 0;
}