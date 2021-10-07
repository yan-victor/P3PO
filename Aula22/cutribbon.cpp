#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 200010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int dp[N];
int a,b,c;

int f(int x) {
	if(x<0) return -INF;
	if(dp[x]>=0) return dp[x];
	return dp[x] = max({f(x-a),f(x-b),f(x-c)})+1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>a>>b>>c;
		cout<<f(n)<<"\n";
	}
}

//f() = quantidade de pedaços maximo



//  (----)|-------------
// f(n) = max(f(n-a),f(n-b),f(n-c))+1