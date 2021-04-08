//Fita Colorida - OBI 2015 PJ Fase 1

#include<bits/stdc++.h>

using namespace std;

const int N = 10010;

int v[N];
int d[N];
int zero[N];

int main() {
  int n;
  cin>>n;
  int qntzero=0;
  for(int i=0;i<n;i++) {
    cin>>v[i];
    if(v[i]==0) {
      d[i]=0;
      zero[qntzero]=i;
      qntzero++;
    }
  }
  int p = 0;
  for(int i=0;i<n;i++) {
    if(i==zero[p]) {
      p++;
    } else {
      if(p==0) d[i] = zero[p] - i;
      else if(p==qntzero) d[i] = i - zero[p-1];
      else {
        d[i] = min(i-zero[p-1],zero[p]-i);
      }
    }
    if(i<n-1) cout<<min(9,d[i])<<" ";
    else cout<<min(9,d[i]);
  }
  cout<<"\n";
}
