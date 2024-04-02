#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<stack>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stack<int>stack;

    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]==' ')
            continue;
        
        if (isdigit(str[i]))
        {
            int num = 0;
            while(i<str.length()&&isdigit(str[i])){
                num = num*10+str[i]-'0';
                i++;
            }
            //stack.push(str[i]-'0');//只考虑了个位数的情况
            i--;
            stack.push(num);
        }
            

        else
        {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            if (str[i] == '+')
                stack.push(a + b);
            else if (str[i] == '-')
                stack.push(b - a);
            else if (str[i] == '*')
                stack.push(a * b);
        }

    }
    cout<<stack.top();
    return 0;
}