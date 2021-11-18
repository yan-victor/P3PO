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

void update(int x,int l,int r,int pos,int val,int op) {
	if(l==r) {
		tree[x] = val;
		return;
	}
	if(pos<=mid) update(fe,l,mid,pos,val,1-op);
	else update(fd,mid+1,r,pos,val,1-op);
	tree[x] = op==0 ? tree[fe]|tree[fd] : tree[fe]^tree[fd];
} //O(logN)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		for(int i=0;i<(1<<n);i++) {
			cin>>v[i];
		}
		int op = (n+1)%2;
		build(0,0,(1<<n)-1,op);
		for(int i=0;i<m;i++) {
			int p,b;
			cin>>p>>b;
			update(0,0,(1<<n)-1,p-1,b,op);
			cout<<tree[0]<<"\n";
		}
	}
}