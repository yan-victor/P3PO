//OBI 2002 - Fase única

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

int grau[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	int x,y;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		int a,v;
		cin>>a>>v;
		int teste=1;
		while(a!=0||v!=0) {
			memset(grau,0,sizeof(grau));
			for(int i=0;i<v;i++) {
				cin>>x>>y;
				grau[x]++;
				grau[y]++;
			}
			int resp = 0;
			for(int i=1;i<=a;i++) {
				resp = max(resp,grau[i]);
			}
			cout<<"Teste "<<teste<<"\n";
			teste++;
			for(int i=1;i<=a;i++) {
				if(resp==grau[i]) cout<<i<<" ";
			}
			cout<<"\n\n";
			cin>>a>>v;
		}
	}
}

//grau de um vértice = número de arestas que envolvem ele
//grau de saída = número de arestas que partem de um vértice
//grau de entrada = número de arestas que chegam em um vértice