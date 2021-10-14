//SMAC 08/09 (Oct) #3 - Jumpscotch

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 1000010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int dp[N];
int v[N];
multiset<int> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m,d;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>d;
		for(int i=1;i<=n;i++) 
			cin>>v[i];
		dp[n] = v[n];
		s.insert(dp[n]);
		for(int i=n-1;i>=n-d+1;i--) {
			dp[i] = *(s.begin())+v[i];
			s.insert(dp[i]);
		}
		for(int i=n-d;i>=1;i--) {
			dp[i] = *(s.begin())+v[i];
			s.erase(s.find(dp[i+d]));
			s.insert(dp[i]);
		}
		cout<<dp[1]<<"\n";
	}
}

