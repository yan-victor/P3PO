//OBI 2021 P2 - Fase 2

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 200010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

//int v[N];
map<string,int> m;
int linha[N];
int coluna[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		//leitura
		while(true) {
			bool achei = 0;
			for(int i=0;i<l;i++) {
				bool naosei = 0;
				int qnt = 1;
				string naoseiString;
				int soma = 0;
				for(int j=0;j<c;j++) {
					if(m.find(matriz[i][j])==m.end()&&naosei==1&&naoseiString!=matriz[i][j]) {
						naosei++;
						break;
					} else if(m.find(matriz[i][j])==m.end()&&naosei==1) {
						qnt++;
					} else if(m.find(matriz[i][j])==m.end()) {
						naosei++;
						naoseiString = matriz[i][j];
					} else {
						soma+=m[matriz[i][j]];
					}

				}
				if(naosei==1) {
					m[naoseiString] = (linha[i]-soma)/qnt;
					achei = 1;
				}
			}
			//checar o mesmo para cada coluna
			if(!achei) break;
		}
	}
}