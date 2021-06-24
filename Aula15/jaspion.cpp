#include<bits/stdc++.h>

using namespace std;

map<string,string> dicionario;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin>>t;
	string a,b;
	for(int k=0;k<t;k++) {
		int n,m;
		cin>>m>>n;
		for(int i=0;i<m;i++) {
			getline(cin,a);
			getline(cin,b);
			dicionario[a]=b;
		}
		for(int i=0;i<n;i++) {
			getline(cin,a);
			cout<<dicionario[a]<<"\n";
		}
		cout<<"\n";
	}
}