//OBI 2010 P2 Fase 2 - Tradutor Alienígena

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define int long long

const int N = 110;
const int S = 100010;
const int INF = 0x3f3f3f3f;
const int mod = 1000000007;

int tamN;
int tamS;
string n,s;
int dp[S];

int f(int pos) {
	if(s[pos]=='0') return 0;
	if(pos==tamS) return 1;
	if(dp[pos]>=0) return dp[pos];
	string aux = "";
	dp[pos] = 0;
	for(int i=pos;i<tamS;i++) {
		aux+=s[i];
		if((i-pos+1)>tamN) break;
		if((i-pos+1)==tamN&&aux>n) break;
		dp[pos] = (dp[pos]+f(i+1))%mod;
	}
	return dp[pos];
}

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//cin>>T;
	int T=1;
	memset(dp,-1,sizeof(dp));
	for(int t=0;t<T;t++) {
		cin>>n>>s;
		tamN = (int)n.size(),tamS = (int)s.size();
		cout<<f(0)<<"\n";
	}
}

// (--)(-)(---)|-----

