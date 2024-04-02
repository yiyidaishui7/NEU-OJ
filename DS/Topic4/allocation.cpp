#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>
#define endl "\n"
using namespace std;
bool canLoad(const vector<int> &weights, int k, int P)
{
    int carCnt = 1;
    int currentLoad = 0;
    for (int weight : weights)
    {
        if (weight > P) // 单件包裹超过单卡车装载量
            return false;

        if (currentLoad + weight <= P) // 如果能够继续装
            currentLoad += weight;
        else
        {
            carCnt++;
            currentLoad = weight;
        }

        if (carCnt > k)
            return false;
    }
    return true;
}
int min_MaxLoad(const vector<int> &weights, int k)
{
    int left = *max_element(weights.begin(), weights.end());
    int right = accumulate(weights.begin(), weights.end(), 0);
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (canLoad(weights, k, mid))
        {
            right = mid;
        }
        else
            left = mid + 1;
    }
    return left;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n = 0, k = 0;
    cin >> n >> k;
    vector<int> weights(n);
    for (auto &i : weights)
        cin >> i;
    int P = min_MaxLoad(weights, k);
    cout << P;
}