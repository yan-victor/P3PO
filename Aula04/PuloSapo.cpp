//OBI 2011 - Primeira Fase - P1

#include<bits/stdc++.h>

using namespace std;

const int N = 110;

bool p[N];

int main() {
  int n,m;
  cin>>n>>m;
  int x,d;
  for(int i=0;i<m;i++) {
    cin>>x>>d;
    for(int j=x;j>0;j-=d) {
      p[j] = 1;
    }
    for(int j=x;j<=n;j+=d) {
      p[j] = 1;
    }
  }
  for(int i=1;i<=n;i++) {
    cout<<p[i]<<"\n";
  }
}
