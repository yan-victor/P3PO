//OBI 2017 P1 Fase 1 - Segredo do Cofre

#include<bits/stdc++.h>
 
using namespace std;
 
const int N = 100010;
 
int vetor0[N];
int vetor1[N];
int vetor2[N];
int vetor3[N];
int vetor4[N];
int vetor5[N];
int vetor6[N];
int vetor7[N];
int vetor8[N];
int vetor9[N];
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
		vetor0[i] = vetor0[i-1];
		vetor1[i] = vetor1[i-1];
		vetor2[i] = vetor2[i-1];
		vetor3[i] = vetor3[i-1];
		vetor4[i] = vetor4[i-1];
		vetor5[i] = vetor5[i-1];
		vetor6[i] = vetor6[i-1];
		vetor7[i] = vetor7[i-1];
		vetor8[i] = vetor8[i-1];
		vetor9[i] = vetor9[i-1];
		if(a==0) vetor0[i]++;
		if(a==1) vetor1[i]++;
		if(a==2) vetor2[i]++;
		if(a==3) vetor3[i]++;
		if(a==4) vetor4[i]++;
		if(a==5) vetor5[i]++;
		if(a==6) vetor6[i]++;
		if(a==7) vetor7[i]++;
		if(a==8) vetor8[i]++;
		if(a==9) vetor9[i]++;
	}
	for(int i=0;i<m;i++) {
		cin>>d[i];
	}
	for(int i=1;i<m;i++) {
		int atual = d[i-1];
		int objetivo = d[i];

		resp[0] += vetor0[max(d[i],d[i-1])]-vetor0[min(d[i],d[i-1])-1];
		resp[1] += vetor1[max(d[i],d[i-1])]-vetor1[min(d[i],d[i-1])-1];
		resp[2] += vetor2[max(d[i],d[i-1])]-vetor2[min(d[i],d[i-1])-1];
		resp[3] += vetor3[max(d[i],d[i-1])]-vetor3[min(d[i],d[i-1])-1];
		resp[4] += vetor4[max(d[i],d[i-1])]-vetor4[min(d[i],d[i-1])-1];
		resp[5] += vetor5[max(d[i],d[i-1])]-vetor5[min(d[i],d[i-1])-1];
		resp[6] += vetor6[max(d[i],d[i-1])]-vetor6[min(d[i],d[i-1])-1];
		resp[7] += vetor7[max(d[i],d[i-1])]-vetor7[min(d[i],d[i-1])-1];
		resp[8] += vetor8[max(d[i],d[i-1])]-vetor8[min(d[i],d[i-1])-1];
		resp[9] += vetor9[max(d[i],d[i-1])]-vetor9[min(d[i],d[i-1])-1];
    
    resp[v[atual]]--;
	}
  resp[v[1]]++;
	for(int i=0;i<10;i++) {
    cout<<resp[i]<<" ";
  }
  cout<<"\n";
}
