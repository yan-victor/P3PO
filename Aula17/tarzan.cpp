//OBI 2012 P2 Fase 1 - Tarzan

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

int x[N],y[N];
vector<int> viz[N];
bool visitado[N];

void dfs(int x) {
	visitado[x] = 1;
	for(int y : viz[x]) {
		if(!visitado[y]) dfs(y);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m,d;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>d;
		for(int i=0;i<n;i++) {
			cin>>x[i]>>y[i];
		}
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i])<=d*d) {
					viz[i].pb(j);
					viz[j].pb(i);
				}
			}
		}
		dfs(1);
		bool ok = 1;
		for(int i=0;i<n;i++) {
			if(visitado[i]==0) ok = 0;
		}
		if(ok) cout<<"S\n";
		else cout<<"N\n";
	}
}