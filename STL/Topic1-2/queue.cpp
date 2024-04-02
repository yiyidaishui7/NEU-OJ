#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n = 0, q = 0;
    cin >> n >> q;
    int flag = 0, t = 0;
    queue<int> Q[n];
    for (int i = 0; i < q; i++)
    {
        cin >> flag >> t;
        switch (flag)
        {
        case 0:
        {
            int x = 0;
            cin >> x;
            Q[t].push(x);
            break;
        }
        case 1:
        {
            if (Q[t].empty())
                break;
            int num = Q[t].front();
            cout << num << endl;
            break;
        }
        case 2:
        {
            if (Q[t].empty())
                break;
            Q[t].pop();
            break;
        }
        }
    }
    return 0;
}