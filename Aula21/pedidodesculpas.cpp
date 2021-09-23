#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 210;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int v[N];
int w[N];
int dp[N*5][N];

int f(int P,int x,int n) {
	if(P<0) return -INF;
	if(x==n+1) return 0;
	if(dp[P][x]>-1) return dp[P][x];
	return dp[P][x] = max(f(P-w[x],x+1,n)+v[x],f(P,x+1,n));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m,P;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>P>>n;
		int teste=0;
		while(n!=0) {
			teste++;
			memset(dp,-1,sizeof(dp));
			for(int i=1;i<=n;i++) {
				cin>>w[i]>>v[i];

			}
			cout<<"Teste "<<teste<<"\n";
			cout<<f(P,1,n)<<"\n";
			cout<<"\n";
			cin>>P>>n;
		}	
	}
}