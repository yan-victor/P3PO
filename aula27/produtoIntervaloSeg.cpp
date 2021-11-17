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

int sign(int x) {
	if(x>0) return 1;
	if(x<0) return -1;
	return 0;
}

char sinal(int x) {
	if(x>0) return '+';
	if(x<0) return '-';
	return '0';
}

void build(int x,int l,int r) {
	if(l==r) {
		tree[x] = v[l];
		return;
	}
	build(fe,l,mid);
	build(fd,mid+1,r);
	tree[x] = tree[fe]*tree[fd];
} //O(NlogN)

void update(int x,int l,int r,int pos,int val) {
	if(l==r) {
		tree[x] = val;
		return;
	}
	if(pos<=mid) update(fe,l,mid,pos,val);
	else update(fd,mid+1,r,pos,val);
	tree[x] = tree[fe]*tree[fd];
} //O(logN)

int query(int x,int l,int r,int ql,int qr) {
	if(ql<=l&&r<=qr) return tree[x];
	if(r<ql||qr<l) return INF;
	return query(fe,l,mid,ql,qr)*query(fd,mid+1,r,ql,qr);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		while(cin>>n>>m) {
			for(int i=0;i<n;i++) {
				cin>>v[i];
				v[i] = sign(v[i]);
			}
			build(0,0,n-1);
			for(int i=0;i<m;i++) {
				int a,b;
				char op;
				cin>>op>>a>>b;
				if(op=='C') {
					b = sign(b);
					update(0,0,n-1,a-1,b);
				} else {
					cout<<sinal(query(0,0,n-1,a-1,b-1));
				}
			}
			cout<<"\n";
		}
	}
}