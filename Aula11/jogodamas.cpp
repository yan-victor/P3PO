//Maratona da UNICAMP 2020 - Jogo de damas

#include<bits/stdc++.h>

using namespace std;

int matriz[10][10];

int vx[4] = {1,1,-1,-1};
int vy[4] = {1,-1,1,-1};

bool dentro(int x,int y) {
	if(x>0&&y>0&&x<=8&&y<=8) return 1;
	return 0;
}

int resp;

void f(int x,int y,int qnt=0) {
	resp = max(resp,qnt);
	for(int i=0;i<4;i++) {
		int posx = x+vx[i];
		int posy = y+vy[i];
		int novox = x+2*vx[i];
		int novoy = y+2*vy[i];
		if(matriz[posx][posy]==1) {
			if(dentro(novox,novoy)&&matriz[novox][novoy]==0) {
				matriz[posx][posy]=0; //a peça vermelha que estava em (posx,posy) foi capturada
				f(novox,novoy,qnt+1);
				matriz[posx][posy]=1;
			}
		}
	}
}

int main() {
	int n,x,y;
	cin>>n>>x>>y;
	int a,b;
	for(int i=0;i<n;i++) {
		cin>>a>>b;
		matriz[a][b]=1;
	}
	f(x,y);
	cout<<resp<<"\n";
}