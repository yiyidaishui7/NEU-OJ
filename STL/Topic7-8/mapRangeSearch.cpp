#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
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
        switch (flag)
        {
        case 0:
        {
            cin >> val;
            M[key]=val;
            // if(M.count(key))
            // M[key]=val;
            // else
            // M.insert(make_pair(key,val));
            break;
        }
        case 1:
        {
            auto it = M.find(key);
            if(it!=M.end())
            cout<<M[key]<<endl;
            else
            cout<<0<<endl;
            break;
        }
        case 2:{
            M.erase(key);
            break;
        }
        case 3:{
            string R;
            cin>>R;
            auto lower = M.lower_bound(key);
            auto upper = M.upper_bound(R);
            for(;lower!=upper;lower++){
                cout<<lower->first<<" "<<lower->second<<endl;
            }
            break;
        }
        default:
            break;
        }
        
    }
    return 0;
}