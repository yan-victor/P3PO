//NEPS Academy - Espantalho

#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int matriz[N][N];
int pre[N][N];

int main() {
  int m,n;
  cin>>n>>m;
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=m;j++) {
      cin>>matriz[i][j];
      pre[i][j] = pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+matriz[i][j];
    }
  }
  int resp = -1;
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=m;j++) {
      int esqsup = pre[i][j];
      int dirsup = pre[i][m]-esqsup;
      int esqinf = pre[n][j]-esqsup;
      int dirinf = pre[n][m]-esqsup-dirsup-esqinf;
      if(esqsup==dirsup&&dirsup==esqinf&&esqinf==dirinf) {
        cout<<i<<" "<<j<<"\n";
        resp++;
      }
    }
  }
  if(resp==-1) cout<<"-1\n";
}
