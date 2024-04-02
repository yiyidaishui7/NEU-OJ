#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <utility>
#define endl "\n"

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int flag = 0;
    string key;
    int val;
    map<string, int> M;

    for (int i = 0; i < n; i++)
    {
        cin >> flag >> key;
        auto it = M.begin();
        switch (flag)
        {
        case 0:
        {
            cin >> val;
            if(M.count(key))
            M[key]=val;
            else
            M.insert(make_pair(key,val));
            break;
        }
        case 1:
        {
            cout<<M[key]<<endl;
            break;
        }
        case 2:{
            M.erase(key);
            break;
        }
        default:
            break;
        }
        
    }
    return 0;
}