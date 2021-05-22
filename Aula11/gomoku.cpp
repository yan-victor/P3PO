#include<bits/stdc++.h>

using namespace std;

const int N = 20;

int vx[4] = {0,1,1,1};
int vy[4] = {1,1,0,-1};

int matriz[N][N];

int f(int x,int y,int qnt=1,int dirx=-1,int diry=-1) {
	int m = 0;
	if(qnt==5) return matriz[x][y];
	if(dirx==-1) {
		for(int i=0;i<4;i++) {
			int novox = x+vx[i];
			int novoy = y+vy[i];
			if(matriz[novox][novoy]==matriz[x][y]) {
				m = max(m,f(novox,novoy,qnt+1,vx[i],vy[i]));
			}
		}
		return m;
	} else {
		int novox = x+dirx;
		int novoy = y+diry;
		if(matriz[novox][novoy]==matriz[x][y]) {
			return f(novox,novoy,qnt+1,dirx,diry);
		}
	}
	return 0;
}


int main() {
	for(int i=1;i<=15;i++) {
		for(int j=1;j<=15;j++) {
			cin>>matriz[i][j];
		}
	}
	for(int i=1;i<=15;i++) {
		for(int j=1;j<=15;j++) {
			if(matriz[i][j]) {
				int aux = f(i,j);
				if(aux) {
					cout<<aux<<"\n";
					return 0;
				}
			}
		}
	}
	cout<<"0\n";
}