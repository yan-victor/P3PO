//Mancha - OBI 2018 P2 Fase 3

#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

char mat[N][N];

int main() {
  int n;
  cin>>n;
  for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
      cin>>mat[i][j];
    }
  }
  bool regular = 1;
  for(int i=0;i<n;i++) {
    int mancha = 0;
    for(int j=0;j<n;j++) {
      if(mat[i][j]=='*') {
        if(mancha==0) mancha=1;
        else if(mancha==2) regular = 0;
      } else {
        if(mancha==1) mancha=2;
      }
    }
  }
  for(int i=0;i<n;i++) {
    int mancha = 0;
    for(int j=0;j<n;j++) {
      if(mat[j][i]=='*') {
        if(mancha==0) mancha=1;
        else if(mancha==2) regular = 0;
      } else {
        if(mancha==1) mancha=2;
      }
    }
  }
  cout<<(regular ? 'S' : 'N')<<"\n";
}
