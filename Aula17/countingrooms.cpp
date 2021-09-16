//CSES - Counting rooms

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

//vector<int> v[N];
char matriz[N][N]; 
int salas;
bool visitado[N][N];
int dirx[4] = {0,0,1,-1};
int diry[4] = {1,-1,0,0};
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
		visitado[atual.F][atual.S] = 1;
		for(int i=0;i<4;i++) {
			int novox = atual.F+dirx[i];
			int novoy = atual.S+diry[i];
			if(dentro(novox,novoy)&&matriz[novox][novoy]=='.'&&!visitado[novox][novoy]) {
				q.push({novox,novoy});
			}
		}
	}
}
//O(V+E)

void dfs(int x,int y) {
	visitado[x][y] = 1;
	for(int i=0;i<4;i++) {
		int novox = x+dirx[i];
		int novoy = y+diry[i];
		if(dentro(novox,novoy)&&matriz[novox][novoy]=='.'&&!visitado[novox][novoy]) {
			dfs(novox,novoy);
		}
	}
}
//O(V+E)

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=m;j++) {
				cin>>matriz[i][j];
			}
		}
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=m;j++) {
				if(matriz[i][j]=='.'&&!visitado[i][j]) {
					dfs(i,j);
					salas++;
				}
			}
		}
		cout<<salas<<"\n";
	}
}