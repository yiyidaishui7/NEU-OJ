#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,q;
	cin>>n;
	vector<int>A(n);
	for(auto&i:A)cin>>i;
	cin>>q;
	int b,m,e;
	for(int i=0;i<q;i++){
		cin>>b>>m>>e;
		rotate(A.begin()+b,A.begin()+m,A.begin()+e);
	}
	for(auto&i:A){
		if(i!=A.back())
		cout<<i<<" ";
		else
		cout<<i<<endl;
	}
	return 0;
}