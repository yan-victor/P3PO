//Segredo do Cofre - OBI 2017 P1 Fase 1

/*{1,2,3,4,..,n}
{'a','b','c'}
{1,2,3
 4,5,6
 7,8,9
} 3x3
*/
#include<bits/stdc++.h>
 
using namespace std;
 
const int N = 100010;
 
int vetor[10][N];
int d[N];
int v[N];
int resp[N];
 
//1 1 0 0 0 1 1 0
//0 0 1 2 3 3 3 4
//3 - 0 = 3
int main() {
  int n,m;
  cin>>n>>m;
  int a;
  for(int i=1;i<=n;i++) {
    cin>>a;
    v[i]=a;
    for(int j=0;j<10;j++) {
        vetor[j][i] = vetor[j][i-1];
    }
    vetor[a][i]++;
  }
  for(int i=0;i<m;i++) {
    cin>>d[i];
  }
  for(int i=1;i<m;i++) {
    int atual = d[i-1];
    int objetivo = d[i];
    for(int j=0;j<10;j++) {
      resp[j] += vetor[j][max(atual,objetivo)] - vetor[j][min(atual,objetivo)-1];
    }
    
    resp[v[atual]]--;
  }
  resp[v[1]]++;
  for(int i=0;i<10;i++) {
    cout<<resp[i]<<" ";
  }
  cout<<"\n";
}
