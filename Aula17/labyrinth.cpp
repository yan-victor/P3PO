//CSES - Labyrinth

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 1010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

char matriz[N][N]; 
int distancia[N][N];
int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};
char dir[4] = {'R','L','D','U'};
char movimento[N][N];
pii pai[N][N];
int T,n,m;

bool dentro(int x,int y) {
	if(x>0&&y>0&&x<=n&&y<=m) return true;
	return false;
}

void bfs(int x,int y) {
	queue< pii > q;
	q.push({x,y});
	while(!q.empty()) {
		pii atual = q.front();
		q.pop();
		for(int i=0;i<4;i++) {
			int novox = atual.F+dirx[i];
			int novoy = atual.S+diry[i];
			if(dentro(novox,novoy)&&matriz[novox][novoy]!='#'&&distancia[novox][novoy]==INF) {
				distancia[novox][novoy] = distancia[atual.F][atual.S]+1;
				pai[novox][novoy] = {atual.F,atual.S};
				movimento[novox][novoy] = dir[i];
				q.push({novox,novoy});
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		memset(distancia,INF,sizeof(distancia));
		cin>>n>>m;
		pii ini,fim;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=m;j++) {
				cin>>matriz[i][j];
				if(matriz[i][j]=='A') ini = {i,j};
				else if(matriz[i][j]=='B') fim = {i,j};
			}
		}
		distancia[ini.F][ini.S] = 0;
		bfs(ini.F,ini.S);
		if(distancia[fim.F][fim.S] == INF) {
			cout<<"NO\n";
			return 0;
		}
		cout<<"YES\n";
		cout<<distancia[fim.F][fim.S]<<"\n";
		pii atual = {fim.F,fim.S};
		vector<char> resp;
		while(atual.F!=ini.F||atual.S!=ini.S) {
			resp.pb(movimento[atual.F][atual.S]);
			atual = pai[atual.F][atual.S];
		}
		reverse(resp.begin(),resp.end());
		for(char c : resp) {
			cout<<c;
		}
		cout<<"\n";
	}
}
