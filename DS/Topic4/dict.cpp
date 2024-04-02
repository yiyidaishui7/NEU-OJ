#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <map>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    map<string, int> dict;
    for (int i = 0; i < n; i++)
    {
        string prompt;
        string str;
        cin >> prompt >> str;
        if (prompt == "insert")
            dict[str] = 1;
        else if (prompt == "find")
        {
            if (dict.count(str))
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
}
