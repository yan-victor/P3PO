#include<bits/stdc++.h>

using namespace std;

const int N = 10010;

int caixas[N];

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>caixas[i];
	}
	sort(caixas+1,caixas+n+1);
	bool ok = 1;
	for(int i=1;i<=n;i++) {
		if(caixas[i]>caixas[i-1]+8) {
			ok = 0;
			break;
		}
	}
	if(ok) cout<<"S\n";
	else cout<<"N\n";
}