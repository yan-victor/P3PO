//OBI 2018 P2 Fase 1 - Câmara de Compensação

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

int grauentrada[N];
int grausaida[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>m>>n;
		int total = 0;
		for(int i=0;i<m;i++) {
			int x,v,y;
			cin>>x>>v>>y;
			grauentrada[y]+=v;
			grausaida[x]+=v;
			total+=v;
		}
		int reduzivel = 0;
		for(int i=1;i<=n;i++) {
			reduzivel+=min(grauentrada[i],grausaida[i]);
		}
		if(reduzivel>0) cout<<"S\n";
		else cout<<"N\n";
		cout<<total-reduzivel<<"\n";
	}
}