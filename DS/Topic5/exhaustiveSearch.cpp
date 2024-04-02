#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <unordered_set>
#define endl "\n"
using namespace std;
bool canSumed(const vector<int> &A, int m)
{
    unordered_set<int> allSum;
    for (int i : A)
    {
        unordered_set<int> newSum;
        for (int sum : allSum)
        {
            newSum.insert(sum + i);
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n = 0, q = 0;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
        cin >> i;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;
        sort(A.begin(), A.end());
        if (canSumed(A, m))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}