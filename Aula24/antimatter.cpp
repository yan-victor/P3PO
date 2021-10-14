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

int v[N];
int dp[10*N][N][2];
int T,n,m;

int f(int soma,int pos,int aberto) {
	if(dp[soma][pos][aberto]>=0) return dp[soma][pos][aberto];
	if(pos>n) {
		if(soma==0&&aberto==1) return 1;
		return 0;
	}
	if(aberto==0) {
		return dp[soma][pos][aberto] = f(soma+v[pos],pos+1,1)+f(soma,pos+1,0);
	} else {
		if(soma==0) dp[soma][pos][aberto] = 1;
		return dp[soma][pos][aberto] += f(soma+v[pos],pos+1,1)+f(abs(soma-v[pos]),pos+1,1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n;
		for(int i=1;i<=n;i++) {
			cin>>v[i];
		}
		memset(dp,-1,sizeof(dp));
		cout<<f(0,1,0)<<"\n";
	}
}