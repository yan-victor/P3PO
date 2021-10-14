#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define int long long

const int N = 200010;
const int INF = 0x3f3f3f3f3f3f3f3f;
const int mod = 1000000007;

int v[N];
int pre[N];
int dp[N][3];
int T,n,m,k;

int f(int pos,int interval) {
	if(interval==0) return 0;
	if(pos+k-1>n) return -INF;
	if(dp[pos][interval]>-INF) return dp[pos][interval];
	return dp[pos][interval] = max(f(pos+k,interval-1)-(pre[pos+k-1]-pre[pos-1]),f(pos+1,interval));
}

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>k;
		for(int i=1;i<=n;i++) {
			cin>>v[i];
			pre[i] = pre[i-1]+v[i];
		}
		for(int i=0;i<=n;i++) {
			for(int j=0;j<=2;j++) {
				dp[i][j] = -INF;
			}
		}
		cout<<f(1,2)<<"\n";
	}
}

//f(pos,0)