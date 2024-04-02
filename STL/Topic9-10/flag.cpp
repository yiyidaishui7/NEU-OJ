#include <iostream>
#include <algorithm>
#include <bitset>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int q;
    cin >> q;
    bitset<64> b;
    int flag, i;
    for (int j = 0; j < q; j++)
    {
        cin >> flag;
        switch (flag)
        {
        case 0:
        {
            cin>>i;
            cout<<b[i]<<endl;
            break;
        }
        case 1:
        {
            cin>>i;
            b.set(i,1);
            break;
        }
        case 2:
        {
            cin>>i;
            b.set(i,0);
            break;
        }
        case 3:
        {
            cin>>i;
            b.flip(i);
            break;
        }
        case 4:
        {
            cout<<((b.count()==64)?1:0)<<endl;//全打开
            break;
        }
        case 5:
        {
            cout<<(!b.none()?1:0)<<endl;//不是全关
            break;
        }
        case 6:
        {
            cout<<(b.none()?1:0)<<endl;
            break;
        }
        case 7:
        {
            cout<<b.count()<<endl;
            break;
        }
        case 8:
        {
            cout<<b.to_ullong()<<endl;
            break;
        }
        default:
        break;
        }
    }
    return 0;
}