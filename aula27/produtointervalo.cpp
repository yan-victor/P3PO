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

int BITp[N];
int BITs[N];

int sign(int x) {
	if(x>0) return 1;
	if(x<0) return -1;
	return 0;
}

//[0,1,1,-1]
//BIT[1] = 0
//BIT[2] = 0*1
//BIT[3] = 1
//BIT[4] = 0*1*1*(-1)

/*void upd(int x,int val) {
	for(;x<n;x+=x&-x) {
		BIT[x]*=0;
	}
}*/
int T,n,k;

void updp(int x,int val) {
	for(;x<=n;x+=x&-x) {
		BITp[x]*=val;
	}
}

int queryp(int x) {
	int produto = 1;
	for(;x>0;x-=x&-x) {
		produto*=BITp[x];
	}
	return produto;
}

void upds(int x,int val) {
	for(;x<=n;x+=x&-x) {
		BITs[x]+=val;
	}
}

int querys(int x) {
	int soma = 0;
	for(;x>0;x-=x&-x) {
		soma+=BITs[x];
	}
	return soma;
}

int vs[N];
int vp[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		while(cin>>n>>k) {
			memset(BITs,0,sizeof(BITs));
			for(int i=1;i<=n;i++)
				BITp[i] = 1;
			for(int i=1;i<=n;i++) {
				cin>>vs[i];

				vs[i] = sign(vs[i]);
				upds(i,abs(vs[i]));
				if(vs[i]!=0) {
					updp(i,vs[i]);
					vp[i] = vs[i];
				}
			}
			for(int i=0;i<k;i++) {
				char c;
				cin>>c;
				if(c=='C') {
					int pos,val;
					cin>>pos>>val;
					val = sign(val);
					upds(pos,abs(val)-abs(vs[pos]));
					if(val!=0) {
						updp(pos,vp[pos]*val);
						vp[pos] = val;
					}
					vs[pos] = val;
				} else {
					int a,b;
					cin>>a>>b;
					int valor = queryp(a-1)*queryp(b);
					int soma = querys(b)-querys(a-1);
					if(soma!=b-a+1) cout<<"0";
					else cout<<(valor>0 ? '+' : '-');
				}
			}
			cout<<"\n";
		}
	}
}