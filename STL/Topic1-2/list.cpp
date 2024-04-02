#include <iostream>
#include <list>
using namespace std;
int main()
{
    int flag = 0;
    int q = 0;
    cin >> q;
    list<int> L;
    list<int>::iterator it = L.end();
    for (int i = 0; i < q; i++)
    {
        cin >> flag;
        switch (flag)
        {
        case 0:
        {
            int x = 0;
            cin >> x;
            it = L.insert(it, x);
            break;
        }
        case 1:
        {
            int d = 0;
            cin >> d;
            it = next(it, d);
            break;
        }
        case 2:
        {
            it = L.erase(it);
            break;
        }
        default:
            break;
        }
    }
    for (auto& it:L){
        cout<<it<<endl;
    }
    return 0;
}