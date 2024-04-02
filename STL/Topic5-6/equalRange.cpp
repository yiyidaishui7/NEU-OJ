#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>A(n);
	for(auto& i:A) cin>>i;
	int q,k;
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>k;
		cout<<lower_bound(A.begin(),A.end(),k)-A.begin()<<" ";
		cout<<upper_bound(A.begin(),A.end(),k)-A.begin()<<endl;
	}
	return 0;
}