#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n = 0, q = 0;
    cin >> n >> q;
    vector<vector<int> > Q(q);
    for (int i = 0; i < q; i++)
    {
        int flag = 0;
        int t = 0, x = 0;
        cin >> flag;
        Q[i].push_back(flag);
        if (flag == 0)
        {
            cin >> t >> x;
            Q[i].push_back(t);
            Q[i].push_back(x);
        }
        else if (flag == 1)
        {
            cin >> t;
            Q[i].push_back(t);
        }
        else if (flag == 2)
        {
            cin >> t;
            Q[i].push_back(t);
        }
    }

    vector<vector<int> > A(n);
    for (int i = 0; i < q; i++)
    {
        int flag = Q[i][0];
        int t = Q[i][1];
        if (flag == 0)
        {
            A[t].push_back(Q[i][2]);
        }
        else if (flag == 1)
        {
            // A[t].dump();
            if (A[t].size() == 0)
            {
                cout << endl;
            }
            else if (A[t].size() == 1)
            {
                cout << A[t][0] << endl;
            }
            else if (A[t].size() == 2)
            {
                cout << A[t][0] <<" "<<A[t][1]<< endl;
            }
            else
            {
                cout << A[t][0];
                for (int i = 1; i < int(A[t].size()); i++)
                {
                    cout << " " << A[t][i];
                }
                cout << endl;
            }
        }
        else if (flag == 2)
        {
            A[t].clear();
        }
    }
    return 0;
}