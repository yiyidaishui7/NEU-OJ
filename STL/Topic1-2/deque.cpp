#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    deque<int> dq;
    vector<int>output;
    int q =0;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int flag = 0, d = 0;
        cin>>flag>>d;
        if (flag == 0)
        {
            int x =0;
            cin>>x;
            if (d == 0)
            {
                dq.push_front(x);
            }
            else if (d == 1)
            {
                dq.push_back(x);
            }
        }
        else if (flag == 1)
        {
            output.push_back(dq[d]);
        }
        else if (flag == 2)
        {
            if (d == 0)
            {
                dq.pop_front();
            }
            else if (d == 1)
            {
                dq.pop_back();
            }
        }
    }
    for(int i:output){
        cout<<i<<endl;
    }
    return 0;
}