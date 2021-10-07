#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 4010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int dp[N];
int a,b,c;

int f(int x) {
	if(x==0) return 0;
	if(dp[x]>=-4000) return dp[x];
	dp[x] = -4000;
	if(x>=a) dp[x] = max(dp[x],f(x-a)+1);
	if(x>=b) dp[x] = max(dp[x],f(x-b)+1);
	if(x>=c) dp[x] = max(dp[x],f(x-c)+1);
	return dp[x];
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>a>>b>>c;
		for(int i=1;i<=n;i++)
			dp[i]=-INF;
		cout<<f(n)<<"\n";
	}
}

//f() = quantidade de pedaços maximo



//  (----)|-------------
// f(n) = max(f(n-a),f(n-b),f(n-c))+1