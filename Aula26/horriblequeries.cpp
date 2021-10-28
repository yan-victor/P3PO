#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long
#define mid ((l+r)>>1)
#define fe 2*x+1
#define fd 2*x+2
#define int long long

const int N = 200010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int tree[4*N];
int lazy[4*N];
int v[N];

void build(int x,int l,int r) {
	if(l==r) {
		tree[x] = v[l];
		return;
	}
	build(fe,l,mid);
	build(fd,mid+1,r);
	tree[x] = tree[fe]+tree[fd];
} //O(NlogN)

void refresh(int x,int l,int r) {
	cout<<"entrei\n";
	tree[x]+=(r-l+1)*lazy[x];
	lazy[fe]=lazy[fd]=lazy[x];
	lazy[x]=0;
	cout<<"sai\n";
}

void update(int x,int l,int r,int ul,int ur,int val) {
	if(ul<=l&&r<=ur) {
		lazy[x] += val;
	}
	if(r<ul||ur<l) return;
	refresh(x,l,r);
	update(fe,l,mid,ul,ur,val);
	update(fd,mid+1,r,ul,ur,val);
	tree[x] = tree[fe]+tree[fd];
} //O(logN)

int query(int x,int l,int r,int ql,int qr) {
	refresh(x,l,r);
	if(ql<=l&&r<=qr) return tree[x];
	if(r<ql||qr<l) return 0;
	return query(fe,l,mid,ql,qr)+query(fd,mid+1,r,ql,qr);
}

int32_t main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);

	int T,n,m;
	cin>>T;
	//T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		memset(tree,0,sizeof(tree));
		memset(lazy,0,sizeof(lazy));
		//cout<<"oi1\n";
		build(0,0,n-1);
		for(int i=0;i<m;i++) {
				//cout<<"oi"<<i<<'\n';
			int op,a,b,val;
			cin>>op>>a>>b;
			if(op==0) {
				cin>>val;
				update(0,0,n-1,a,b,val);
			} else {
				cout<<query(0,0,n-1,a,b-1)<<"\n";
			}
		}
	}
}