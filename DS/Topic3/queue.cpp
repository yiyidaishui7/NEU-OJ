#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <list>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, time;
    cin >> n >> time;
    queue<pair<string, int>> q;
    string namei;
    int timei;
    for (int i = 0; i < n; i++)
    {
        cin >> namei >> timei;
        q.push(make_pair(namei, timei));
    }
    int alltime = 0;
    while (!q.empty())
    {
        pair<string, int> i = q.front();
        q.pop();
        if (i.second <= time) // 可以结束
        {
            alltime += i.second;
            cout << i.first << " " << alltime << endl;
        }
        else
        {
            q.push(make_pair(i.first, i.second - time));
            alltime += time;
        }
    }
    return 0;
}