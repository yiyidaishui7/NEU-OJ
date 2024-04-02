#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include<bitset>
#define endl "\n"
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    set<int>S;
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    S.insert(i);
    for(int i=0;i<(1<<n);i++){
        bitset<32>b(i);
        cout<<i<<":";
        for(int j=0;j<n;j++){
            if(b[j])
            cout<<" "<<S[j];
        cout<<endl;
        }
    }
    return 0;
}