//OBI 2020 P1 Fase 1 Turno A - Pandemia

#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

bool infectado[N];
int presente[N];

int main() {
	int n,m;
	cin>>n>>m;
	int doente,r;
	cin>>doente>>r;
	int resp=0;
	for(int i=1;i<=m;i++) {
		int qnt;
		cin>>qnt;
		for(int j=0;j<qnt;j++) {
			cin>>presente[j];
		}
		if(i>=r) {
			infectado[doente]=1;
			bool ok = 1;
			for(int j=0;j<qnt;j++) {
				if(infectado[presente[j]]) ok=0;
			}
			if(ok==0) {
				for(int j=0;j<qnt;j++) {
					infectado[presente[j]]=1;
				}
			}
		}
	}
	for(int i=1;i<=n;i++) {
		if(infectado[i]) resp++;
	}
	cout<<resp<<"\n";
}