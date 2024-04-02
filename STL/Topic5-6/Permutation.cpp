#include <iostream>
#include <algorithm>
#include <set>
#include <tuple>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;

    prev_permutation(arr.begin(), arr.end());
    // for (int i = 0; i < 3; i++)
    // {
        // for (auto &j : arr)
            // cout << j << " ";
        // cout << endl;
        // next_permutation(arr.begin(), arr.end());
    // }
    int i = 0;
    do
    {
        for (auto i : arr)
        {
            cout << i << ' ';
        }
        cout << endl;
        ++i;
    } while (next_permutation(arr.begin(), arr.end()) && i < 3);
    return 0;
}



