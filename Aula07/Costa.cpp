//OBI P1 2012 Fase 2 - Costa

#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int matriz[N][N];

int main() {
  int m,n;
  cin>>m>>n;
  char c;
  for(int i=1;i<=m;i++) {
    for(int j=1;j<=n;j++) {
      cin>>c;
      if(c=='#') matriz[i][j] = 1;
    }
  }

  int resposta = 0;

  for(int i=1;i<=m;i++) {
    for(int j=1;j<=n;j++) {
      int aux = 0;
      aux += matriz[i][j-1]+matriz[i-1][j]+matriz[i+1][j]+matriz[i][j+1];
      if(matriz[i][j]==1&&aux<4) resposta++;
    }
  }
  cout<<resposta<<"\n";
}
