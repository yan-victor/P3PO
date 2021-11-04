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
	if(lazy[x]==0) return;
	tree[x]+=(r-l+1)*lazy[x];
	if(l!=r) lazy[fd]+=lazy[x];
	if(l!=r) lazy[fe]+=lazy[x];
	lazy[x]=0;
}

void update(int x,int l,int r,int ul,int ur,int val) {
	refresh(x,l,r);
	if(ul<=l&&r<=ur) {
		lazy[x] += val;
		refresh(x,l,r);
		return;
	}
	if(r<ul||ur<l) return;
	update(fe,l,mid,ul,ur,val);
	update(fd,mid+1,r,ul,ur,val);
	tree[x] = tree[fe]+tree[fd];
} //O(logN)

int query(int x,int l,int r,int ql,int qr) {
	if(r<ql||qr<l) return 0;
	refresh(x,l,r);
	if(ql<=l&&r<=qr) return tree[x];
	return query(fe,l,mid,ql,qr)+query(fd,mid+1,r,ql,qr);
} //O(logN)

int32_t main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	cin>>T;
	//T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		memset(tree,0,sizeof(tree));
		memset(lazy,0,sizeof(lazy));

		for(int i=0;i<m;i++) {
			int op,a,b,val;
			cin>>op>>a>>b;
			if(op==0) {
				cin>>val;
				update(0,0,n-1,a-1,b-1,val);
			} else {
				cout<<query(0,0,n-1,a-1,b-1)<<"\n";
			}
		}
	}
}