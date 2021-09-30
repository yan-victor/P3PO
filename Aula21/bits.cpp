//OBI 2017 P2 Fase 3 - Bits

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

int dp[N][N];
int T,n,k;

int f(int x,int bits) {
	if(x>n) return 1; //x>=n+1
	if(dp[x][bits]>-1) return dp[x][bits];
	if(bits<k-1) return dp[x][bits] = (f(x+1,bits+1)+f(x+1,0))%mod;
	return dp[x][bits] = f(x+1,0)%mod;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//cin>>T;
	T=1;
	memset(dp,-1,sizeof(dp));
	for(int t=0;t<T;t++) {
		cin>>n>>k;
		cout<<f(1,0)%mod<<"\n";
	}
}

