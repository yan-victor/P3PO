//Torre OBI 2015 PJ

#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

int acumuladoL[N];
int acumuladoC[N];
int mat[N][N];

int main() {
  int n;
  cin>>n;
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
      cin>>mat[i][j];
      acumuladoL[i]+=mat[i][j];
      acumuladoC[j]+=mat[i][j];
    }
  }
  int maxi = 0;
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {
      maxi = max(maxi,acumuladoC[j]+acumuladoL[i]-2*mat[i][j]);
    }
  }
  cout<<maxi<<"\n";
}
