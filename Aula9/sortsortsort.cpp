#include<bits/stdc++.h>

using namespace std;

/*tipo_de_retorno nome_da_funcao(argumento1,argumento2,...,) {
	conteudo_funcao
}*/

const int N = 10010;

int v[N];
int m;

bool comp(int a,int b) {
	int am = a%m;
	int bm = b%m;
	if(am!=bm) return am<bm;
	if(abs(a%2)!=abs(b%2)) return abs(a%2)==1;
	if(a%2==0) return a<b;
	return a>b;
}

int main() {
	int n;
	cin>>n>>m;
	while(n!=0) {
		for(int i=0;i<n;i++) {
			cin>>v[i];
		}
		sort(v,v+n,comp);
		cout<<n<<" "<<m<<"\n";
		for(int i=0;i<n;i++)
			cout<<v[i]<<"\n";
		cin>>n>>m;
	}
	cout<<"0 0\n";
}