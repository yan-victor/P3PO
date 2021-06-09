#include<bits/stdc++.h>

using namespace std;

/*tipo_de_retorno nome_da_funcao(argumento1,argumento2,...,) {
	conteudo_funcao
}*/

int v[100];

bool comp(int a,int b) {
	if(a==0) return 1;
	if(b==0) return 0;
	return abs(a)<abs(b); 
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	sort(v,v+n,comp);
	for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
	cout<<"\n";
}