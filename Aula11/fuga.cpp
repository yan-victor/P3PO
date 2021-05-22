#include<bits/stdc++.h>

using namespace std;

int visitado[15][15];

int vx[4] = {2,-2,0,0};
int vy[4] = {0,0,2,-2};

int resp;

int xfinal,yfinal,n,m;

bool dentro(int x,int y) {
	if(x>0&&y>0&&x<=n&&y<=m) return 1;
	return 0;
}

void f(int x,int y,int qnt=0) {
	if(xfinal==x&&yfinal==y) {
		resp = max(resp,qnt);
		return;
	}
	for(int i=0;i<4;i++) {
		int posx = x+vx[i];
		int posy = y+vy[i];
		if(dentro(posx,posy)&&visitado[posx][posy]==0) {
			visitado[posx][posy]=1;
			f(posx,posy,qnt+1);
			visitado[posx][posy]=0;
		}
	}
}

int main() {
	int xinicial,yinicial;
	cin>>n>>xinicial>>yinicial>>xfinal>>yfinal;
	visitado[xinicial][yinicial]=1;
	f(xinicial,yinicial);
	cout<<resp<<"\n";
}