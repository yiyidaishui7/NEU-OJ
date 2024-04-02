#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int q, x;
    set<int> S;
    for (int i = 0; i < n; i++)
    {
        cin >> q >> x;
        switch (q)
        {
        case 0:
        {
            S.insert(x);
            cout<<S.size()<<endl;
            break;
        }
        case 1:
        {
            if(S.find(x)!=S.end())
            cout<<1<<endl;
            else
            cout<<0<<endl;
            break;
        }
        case 2:
        {
            S.erase(x);
            break;
        }
        default:
            break;
        }
    }
    return 0;
}