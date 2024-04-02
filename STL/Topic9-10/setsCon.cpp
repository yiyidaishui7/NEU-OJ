#include <iostream>
#include <set>
#include <algorithm>
#define endl "\n"
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    set<int> A, B;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        A.insert(k);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> k;
        A.insert(k);
    }
    for(auto i:A)
    cout<<i<<endl;
    return 0;
}