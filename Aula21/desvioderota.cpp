#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 260;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int dis[N][N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m,c,k,u,v,p;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m>>c>>k;
		while(n!=0) 
		{
			memset(dis,INF,sizeof(dis));
			for(int i=0;i<m;i++) {
				cin>>u>>v>>p;
				dis[u][v]=dis[v][u]=p;
			}
			for(int i=0;i<n;i++) {
				dis[i][i]=0;
			}

			for(int j=c-1;j>=0;j--) {
				for(int i=j-2;i>=0;i--) {
					dis[i][j] = dis[j][i] = dis[i][i+1]+dis[i+1][j];
				}
			}

			for(int l=c;l<n;l++) {
				for(int i=0;i<n;i++) {
					for(int j=0;j<n;j++) {
						if(i<c) continue;
						if(dis[i][j]>dis[i][l]+dis[l][j]) {
							dis[i][j] = dis[i][l]+dis[l][j];
						}
					}
				}
			}
			int ans = dis[k][c-1];
			for(int i=0;i<c-1;i++)
				ans=min(dis[k][i]+dis[i][c-1],ans);
			cout<<ans<<"\n";
			cin>>n>>m>>c>>k;
		} 
	}
}