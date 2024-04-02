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
    multimap<string, int> M;

    for (int i = 0; i < n; i++)
    {
        cin >> flag >> key;
        switch (flag)
        {
        case 0:
        {
            cin >> val;
            M.insert(make_pair(key,val));
            break;
        }
        case 1:
        {
        	//部分数据超时
            // auto it = M.begin();
            // for(;it!=M.end();it++){
            	// if(it->first==key)
            	// cout<<it->second<<endl;
            // }
            auto range = M.equal_range(key);
            for(auto it = range.first;it!=range.second;it++){
            	cout<<it->second<<endl;
            }
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