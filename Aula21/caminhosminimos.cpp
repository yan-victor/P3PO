//OBI 2017 Seletiva IOI - Caminhos Mínimos

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long
#define int ll

const int N = 20010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

//int v[N];
vector<pii> viz[N];
pii disQuantidadeAresta[N];
pii disPeso[N];

void dijkstraQuantidadeArestas(int x,int k) {
	priority_queue< pair< pii, int >, vector< pair< pii,int > >, greater< pair < pii,int > > > pq;
	pq.push({{0,0},x});
	while(!pq.empty()) {
		pair< pii,int > atual = pq.top();
		pq.pop();
		for(pii u : viz[atual.S]) {
			if(disQuantidadeAresta[u.S]>pii(disQuantidadeAresta[atual.S].F+1,disQuantidadeAresta[atual.S].S+u.F+k)) {
				disQuantidadeAresta[u.S] = {disQuantidadeAresta[atual.S].F+1,disQuantidadeAresta[atual.S].S+u.F+k};
				pq.push({disQuantidadeAresta[u.S],u.S});
			}	
		}
	}
}

void dijkstraPeso(int x,int k) {
	priority_queue< pair< pii, int >, vector< pair< pii,int > >, greater< pair< pii,int > > > pq;
	pq.push({{0,0},x});
	while(!pq.empty()) {
		pair< pii,int > atual = pq.top();
		pq.pop();
		for(pii u : viz[atual.S]) {
			if(disPeso[u.S]>pii(disPeso[atual.S].F+u.F+k,disPeso[atual.S].S+1)) {
				disPeso[u.S] = {disPeso[atual.S].F+u.F+k,disPeso[atual.S].S+1};
				pq.push({disPeso[u.S],u.S});
			}	
		}
	}
}

int32_t main() {
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
			viz[a].push_back({c,b});
			viz[b].push_back({c,a});
		}
		int resp=-1;
		int l=0,r=1000000001;
		while(l<=r) {
			if(l==r) {
				resp=l;
				break;
			} else {
				int mid = ((l+r)>>1);
				memset(disPeso,INF,sizeof(disPeso));
				memset(disQuantidadeAresta,INF,sizeof(disQuantidadeAresta));
				disPeso[1] = disQuantidadeAresta[1] = {0,0};
				dijkstraQuantidadeArestas(1,mid);
				dijkstraPeso(1,mid);
				bool ok = 1;
				for(int i=1;i<=n;i++) {

					if(disPeso[i].S!=disQuantidadeAresta[i].F) {
//						cout<<mid<<" "<<disPeso[i].S<<" "<<disQuantidadeAresta[i].F<<" "<<i<<"\n";
						ok = 0;
						break;
					}
				}
				if(ok) {
					r = mid;
				} else {
					l = mid+1;
//					cout<<"aaaaa"<<l<<" "<<r<<"\n";
				}
			}
		}
		cout<<resp<<"\n";

	}
}