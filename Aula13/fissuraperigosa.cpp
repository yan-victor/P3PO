//OBI 2020 P1 Fase 1 Turno A - Fissura Perigosa

#include<bits/stdc++.h>

using namespace std;

const int N = 510;

int dirx[4] = {1,-1,0,0};
int diry[4] = {0,0,1,-1};

int n;
char f;
char matriz[N][N];

int fora(int x,int y) {
	if(x>n||y>n||x<1||y<1) return true;
	return false;
}

void erup(int x,int y) {
	matriz[x][y]='*';
	//cout<<x<<" "<<y<<"\n";
	for(int i=0;i<4;i++) {
		int novox = x+dirx[i];
		int novoy = y+diry[i];
		if(fora(novox,novoy)) continue;
		if(matriz[novox][novoy]!='*'&&matriz[novox][novoy]<=f) {
			erup(novox,novoy);
		}
	}
}

int main() {
	cin>>n>>f;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin>>matriz[i][j];
		}
	}
	if(matriz[1][1]<=f) erup(1,1);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
}