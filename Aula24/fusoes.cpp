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

int pai[N];
int peso[N];

int find(int x) {
	if(x==pai[x]) return x;
	return pai[x]=find(pai[x]);
}

void fusao(int x,int y) {
	x=find(x);
	y=find(y);
	if(peso[x]<peso[y]) {
		pai[x]=y;
	} else if(peso[x]>peso[y]) {
		pai[y]=x;
	} else {
		pai[x]=y;
		peso[y]++;
	}
}

//pai[1]=2
//pai[3]=4
//pai[1]=3

string consulta(int x,int y) {
	x=find(x);
	y=find(y);
	if(y!=x) return "N\n";
	else return "S\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		for(int i=1;i<=n;i++) 
			pai[i]=i;
		for(int i=0;i<m;i++) {
			char op;
			int a,b;
			cin>>op;
			cin>>a>>b;
			if(op=='F') {
				fusao(a,b);
			} else {
				cout<<consulta(a,b);
			}
		}
	}
}

//Sem small to large e sem path compression: O(N) por consulta e O(N) find
//Sem path compression: O(log2N) consulta mas O(N) pro find
//Sem small to large: O(1) amortizado pro find e consulta
//path compression e small to large: O(alfa(N)) ~ O(1)