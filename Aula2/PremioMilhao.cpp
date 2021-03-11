// OBI PJ Fase 1 - 2015 - Prêmio do Milhão

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int qnt = 0;
	bool f = 0;
	int resp,a;
	for(int i=1;i<=n;i++) {
		cin>>a;
		qnt+=a;
		if(qnt>=1000000&&f==0) {
			f=1;
			resp=i;
		}
	}
	cout<<resp<<"\n";
}
