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

ll gcd(ll a,ll b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		for(ll i=m;i>=1;i--) {
			if(gcd(i,n)==1) {
				cout<<i<<"\n";
				break;
			}
		}
	}
}