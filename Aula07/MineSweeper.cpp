//2020 ICPC Shanghai Site - B

#include<bits/stdc++.h>
 
using namespace std;
 
const int N = 1010;
 
char matrizA[N][N];
char matrizB[N][N];
 
int main() {
  int m,n;
  char c;
  cin>>n>>m;
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      cin>>matrizA[i][j];
    }
  }  
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      cin>>matrizB[i][j];
    }
  }
  int resp1 = 0; //B -> Matriz A original 
  int resp2 = 0; //B -> Matriz A invertida
  //resp1+resp2 = n*m
  // n*m/2 = x
  // resp1>x && resp2 >x -> resp1+resp2>2x -> abs! pois resp1+resp2 = n*m 
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      if(matrizA[i][j]==matrizB[i][j]) {
        resp2++;
      } else {
        resp1++;
      }
    }
  }
  if(resp1<resp2) {
    for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++) {
        cout<<matrizA[i][j];
      }
      cout<<"\n";
    }
  } else {
    for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++) {
        if(matrizA[i][j]=='.') matrizA[i][j] = 'X';
        else if(matrizA[i][j]=='X') matrizA[i][j] = '.';
        cout<<matrizA[i][j];
      }
      cout<<"\n";
    }
  }
}
