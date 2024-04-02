#include <iostream>
#include <stack>
// #include <bits/stdc++.h>
// #include <vector>
using namespace std;
int main()
{
    int n = 0, q = 0;
    cin >> n >> q;
    int flag = 0, t = 0;
    stack<int> S[n];
    // vector<int> output;
    for (int i = 0; i < q; i++)
    {
        cin >> flag >> t;
        switch (flag)
        {
        case 0:
        {
            int x = 0;
            cin >> x;
            S[t].push(x);
            break;
        }
        case 1:
        {
            if (S[t].empty())
                break;
            cout << S[t].top() << endl;
            // int num = S[t].top();
            // output.push_back(num);
            break;
        }
        case 2:
        {
            if (S[t].empty())
                break;
            S[t].pop();
            break;
        }
        default:
            break;
        }
    }

    // for (auto &i : output)
    // {
    //     cout << i << endl;
    //     return 0;
    // }
    return 0;
}