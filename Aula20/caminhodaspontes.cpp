#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 1010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

vector<pii> v[N];
int dist[N];
//dist[i] = distancia do vertice inicial até o vertice i

void dijkstra (int x) {
	priority_queue< pii,vector<pii>,greater<pii> > pq;
	pq.push({0,x});
	while(!pq.empty()) {
		pii atual = pq.top();
		pq.pop();
		if(atual.S==n+1) break;
		for(pii viz : v[atual.S]) {
			if(dist[viz.S]>dist[atual.S]+viz.F) {
				dist[viz.S] = dist[atual.S]+viz.F;
				pq.push({dist[viz.S],viz.S});
			}
		}
	}
} //O(E+VlogV)
//Nesse caso, 10^4 + 10^3 * log(10^3) ~ 2*10^4

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		int a,b,c;
		for(int i=0;i<m;i++) {
			cin>>a>>b>>c;
			v[a].push_back({c,b});
			v[b].push_back({c,a});
		}
		memset(dist,INF,sizeof(dist));
		dist[0] = 0;
		dijkstra(0);
		cout<<dist[n+1]<<"\n";
	}
}