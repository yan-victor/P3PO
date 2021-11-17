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

const int N = 200010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int tree[4*N];
int v[N];

void build(int x,int l,int r,int op=0) {
	if(l==r) {
		tree[x] = v[l];
		return;
	}
	build(fe,l,mid,1-op);
	build(fd,mid+1,r,1-op);
	tree[x] = op==0 ? tree[fe]|tree[fd] : tree[fe]^tree[fd];
} //O(NlogN)

bool buildCerto(int x,int l,int r,int op=0) {
	if(l==r) return true;
	int resp = buildCerto(fe,l,mid,1-op);
	resp &= buildCerto(fd,mid+1,r,1-op);
	if(r-l+1==2) {
		return (op==0);
	}
	return resp;
} 

void update(int x,int l,int r,int pos,int val,int op) {
	if(l==r) {
		tree[x] = val;
		return;
	}
	if(pos<=mid) update(fe,l,mid,pos,val,1-op);
	else update(fd,mid+1,r,pos,val,1-op);
	tree[x] = op==0 ? tree[fe]|tree[fd] : tree[fe]^tree[fd];
} //O(logN)

int query(int x,int l,int r,int ql,int qr,int op=0) {
	if(ql<=l&&r<=qr) return tree[x];
	if(r<ql||qr<l) return INF;
	return op==0 ? query(fe,l,mid,ql,qr,1-op)|query(fd,mid+1,r,ql,qr,1-op) : query(fe,l,mid,ql,qr,1-op)^query(fd,mid+1,r,ql,qr,1-op);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		for(int i=0;i<n;i++) {
			cin>>v[i];
		}
		int op = buildCerto(0,0,n-1,0);
		build(0,0,n-1,op);
		for(int i=0;i<m;i++) {
			int p,b;
			cin>>p>>b;
			update(0,0,n-1,p-1,b,op);
			cout<<query(0,0,n-1,0,n-1,op)<<"\n";
		}
	}
}