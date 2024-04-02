#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n = 0, q = 0;
    cin >> n >> q;
    int flag = 0, t = 0;
    priority_queue<int> pq[n];
    for (int i = 0; i < q; i++)
    {
        cin >> flag >> t;
        switch (flag)
        {
        case 0:
        {
            int x = 0;
            cin >> x;
            pq[t].push(x);
            break;
        }
        case 1:
        {
            if (pq[t].empty())
                break;
            int num = pq[t].top();
            cout << num << endl;
            break;
        }
        case 2:
        {
            if (pq[t].empty())
                break;
            pq[t].pop();
            break;
        }
        }

    }
            return 0;
}