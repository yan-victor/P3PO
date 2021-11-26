#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 20000010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

bool composto[N];
vector<int> primos;

void crivo(int x) {
	for(int i=3;i<x;i+=2) {
		if(!composto[i]) {
			primos.pb(i);
			for(int j=3*i;j<x;j+=2*i) 
				composto[j] = 1;
		}
	}
} //O(x(log(logx)))

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	crivo(N);
	primos.pb(2);
	for(int t=0;t<T;t++) {
		cin>>n;
		cout<<primos[n-1]<<"\n";
	}
}