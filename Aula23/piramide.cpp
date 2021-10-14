//OBI 2018 P1 Fase 1 - Pirâmide

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

int v[N][N];
int pre[N][N];
int dp[N][N];

int f(int i,int l,int r) {
	if(i==0) return 0;
	if(dp[l][r]>=0) return dp[l][r];
	return dp[l][r] = min(f(i-1,l+1,r),f(i-1,l,r-1))+pre[i][r]-pre[i][l-1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n;
		memset(dp,-1,sizeof(dp));
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				cin>>v[i][j];
				pre[i][j] = pre[i][j-1]+v[i][j];
			}
		}
		cout<<f(n,1,n)<<"\n";
	}
}

//dp[l][r]
//f(i,l,r) = min(f(i-1,l+1,r)+sum(l,r),f(i-1,l,r-1)+sum(l,r-1))