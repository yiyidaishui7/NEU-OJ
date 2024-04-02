#include <iostream>
#include <algorithm>
#include <bitset>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    unsigned int a,b;
    cin >> a>>b;
    bitset<32> b1(a),b2(b);
    cout << (b1&b2) << endl;
    cout << (b1|b2) << endl;
    cout << (b1^b2) << endl;
    return 0;
}