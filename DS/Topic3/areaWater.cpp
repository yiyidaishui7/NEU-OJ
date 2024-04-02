// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// #include <stack>
// #include <cmath>
// #define endl "\n"
// using namespace std;
// typedef struct sm
// {
//     int left;
//     int area;
// };
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     vector<int> area;
//     // int floodArea = 0;
//     string str;
//     cin >> str;

//     // stack<sm> range;
//     stack<int> q;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == '\\' || '_')
//         {
//             q.push(i);
//         }
//         else if (!q.empty() && str[i] == '/')
//         {
//             int begin = q.top();
//             q.pop();
//             // floodArea += i - begin;
//             area.push_back(i - begin);

//             while (!q.empty() && str[q.top()] == '\\')
//             {
//                 // int begin2 = q.top();
//                 q.pop();
//                 // floodArea += i - begin2;
//                 // area.push_back(i - begin2);
//             }
//         }
//     }

//     // output
//     int sumArea = 0;
//     for (auto i : area)
//     {
//         sumArea += i;
//     }
//     cout << sumArea << endl;
//     cout << area.size();
//     for (auto i : area)
//     {
//         cout << " " << i;
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
#define endl "\n"
using namespace std;

struct region
{
    int start;
    int width;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack<int> left; // 左斜坡的索引栈
    vector<region> areas;

    string str;
    cin >> str;

    int totalArea = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '\\')
        {
            left.push(i);
        }
        else if (str[i] == '/' && !left.empty())
        {
            int leftIndex = left.top();
            left.pop();
            int width = i - leftIndex;
            totalArea += width;

            // 更新被洪水淹没的区域的宽度
            while (!areas.empty() && areas.back().start > leftIndex)
            {
                width += areas.back().width;
                areas.pop_back();
            }

            areas.push_back({leftIndex, width});
        }
    }

    cout << totalArea << endl;

    cout << areas.size() << ' ';
    for (const auto &i : areas)
    {
        cout << i.width << ' ';
    }
    cout << endl;

    return 0;
}
