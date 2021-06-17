//OBI 2020 P2 Fase 3 - Jogo do preto e branco

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second

int diri[4] = {1,-1,0,0};
int dirj[4] = {0,0,1,-1};
int saida = 0;

int ocupado[10][10]; 
//0 - vazio
//1 - preta
//2 - branca

int linearizar(int l,int c) {
	return (l-1)*c+c;
}
int l,c;

pii deslinearizar(int x) {
	int linhas = x/c;
	int colunas = x - linhas*c;
	if(x%c) linhas++;
	if(colunas==0) colunas = c;
	return {linhas,colunas};
}

void f(int x,int resp) {
	if(x==l*c+1) {
		saida=max(saida,resp);
		return;
	}
	pii aux = deslinearizar(x);
	int i = aux.F;
	int j = aux.S;
	//cout<<i<<" "<<j<<" "<<resp<<"\n";
	if(ocupado[i][j]) f(x+1,resp);
	else {
		int branco=0,preto=0;
		for(int k=0;k<4;k++) {
			int vizi = i + diri[k];
			int vizj = j + dirj[k];
			if(ocupado[vizi][vizj]==1) preto++;
			if(ocupado[vizi][vizj]==2) branco++;
		}
		if(branco) f(x+1,resp);
		else if(preto) {
			ocupado[i][j]=2;
			f(x+1,resp+1);
			ocupado[i][j]=0;
			f(x+1,resp);
		} else f(x+1,resp);
	}
}

int main() {
	int p,a,b;
	cin>>l>>c>>p;
	for(int i=0;i<p;i++) {
		cin>>a>>b;
		ocupado[a][b]=1;
	}
	f(1,0);
	cout<<saida<<"\n";
}
