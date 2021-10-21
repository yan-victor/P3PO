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

int BIT[N];
int v[N];
int n;

void upd(int x,int val) {
	for(;x<=n;x+=x&-x) {
		BIT[x] += val;
		//cout<<x<<" "<<val<<"\n";
	}
}

int query(int x) {
	int soma = 0;
	for(;x>0;x-=x&-x)
		soma+=BIT[x];
	return soma;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		int op,k,p;
		for(int i=1;i<=n;i++) {
			cin>>v[i];
			upd(i,v[i]);
		}
		for(int i=0;i<m;i++) {
			cin>>op;
			if(op==0) {
				cin>>k>>p;
				upd(k,p-v[k]);
				v[k]=p;
			} else {
				cin>>k;
				cout<<query(k)<<"\n";
			}
		}
	}
}