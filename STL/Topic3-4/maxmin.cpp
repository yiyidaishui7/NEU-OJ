#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	int m1 =max(max(a,b),c);
	
	int m2 = min(min(a,b),c);
	cout<<m2<<" "<<m1; 
	return 0;
}