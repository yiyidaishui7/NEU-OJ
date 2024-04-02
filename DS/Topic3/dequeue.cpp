#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    deque<int> dq;
    int n;
    cin >> n;
    string prompt;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> prompt;
        if (prompt == "insert")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (prompt == "delete")
        {
            cin >> x;
            for (auto it = dq.begin(); it != dq.end(); it++)
            {
                if (*it == x)
                {
                    it = dq.erase(it);
                    break;
                }
            }
        }
        else if (prompt == "deleteFirst")
        {
            dq.pop_front();
        }
        else if (prompt == "deleteLast")
        {
            dq.pop_back();
        }
    }
    for (auto it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it;
        if (next(it) != dq.end())
            cout << " ";
    }
    return 0;
}