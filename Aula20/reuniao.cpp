#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 110;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

//int v[N];
int dis[N][N];

//dijkstra para todos os vertices = O(V(E+VlogV)) = O(VE+V^2logV)
//Nesse caso, nossa complexidade seria 10^2 * 10^2 + 10^4 * log(10^4) ~ 10^6, tudo bem!

//Floyd-Warshall O(V^3) = 10^6, nesse caso, ok!
int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	memset(dis,INF,sizeof(dis));
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		int a,b,c;
		for(int i=0;i<m;i++) {
			cin>>a>>b>>c;
			dis[a][b] = dis[b][a] = c;
		}
		for(int i=0;i<n;i++)
			dis[i][i] = 0;
		for(int k=0;k<n;k++) {
			for(int i=0;i<n;i++) {
				for(int j=i+1;j<n;j++) {
					if(dis[i][j] > dis[i][k]+dis[k][j]) {
						dis[i][j] = dis[j][i] = dis[i][k]+dis[k][j];
					}	
				}
			}
		}
		int resp = INF;
		for(int i=0;i<n;i++) {
			int maior = 0;
			for(int j=0;j<n;j++) {
				maior = max(maior,dis[i][j]);
			}
			resp = min(resp,maior);
		}
		cout<<resp<<"\n";
	}
	

}