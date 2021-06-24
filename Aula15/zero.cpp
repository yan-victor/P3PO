#include<bits/stdc++.h>

using namespace std;

stack<int> val;
int soma;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		int a;
		cin>>a;
		if(a==0) {
			soma-=val.top();
			val.pop();
		} else {
			soma+=a;
			val.push(a);
		}
	}
	cout<<soma<<"\n";

}