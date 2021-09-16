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

vector<int> v[N];
int tam[N];

void dfs(int x) {
	tam[x]++;
	for(int viz : v[x]) {
		if(tam[viz]==0) {
			dfs(viz);
			tam[x]+=tam[viz];
		}
	}
}

bool dfs2(int x,int pai=-1) {
	int tamanho = -1;
	bool ok = 1;
	for(int viz : v[x]) {
		if(viz==pai) continue;
		if(tamanho==-1) tamanho=tam[viz];
		else ok &= (tamanho == tam[viz]);
		ok &= dfs2(viz,x);
	}
	return ok;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m,a,b;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>a>>b;
			v[a].pb(b);
			v[b].pb(a);
		}
		dfs(0);
		if(dfs2(0)) cout<<"bem\n";
		else cout<<"mal\n";
	}
}