#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long
#define mid ((l+r)>>1)

const int N = 200010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int v[N];
int pre[N];

bool bb(int x,int v,int l,int r) {
	if(pre[mid]-pre[x-1]==v) return true;
	if(l==r) return false;
	if(pre[mid]-pre[x-1]>v) return bb(x,v,l,mid);
	return bb(x,v,mid+1,r); 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n;
		int soma=0;
		for(int i=1;i<=n;i++) {
			cin>>v[i];
			soma+=v[i];
		}
		for(int i=n+1;i<=2*n;i++) {
			v[i] = v[i-n];
		}
		for(int i=1;i<=2*n;i++) {
			pre[i] = pre[i-1]+v[i];
		}
		int total = 0;
		for(int i=1;i<=n;i++) {
			total += bb(i,soma/2,i+1,i+n-1);
		}
		if(total>=4) cout<<"Y\n";
		else cout<<"N\n";
	}
}