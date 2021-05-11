// IX Maratona de Programação IME-USP, 2005 - Spur Rocks

#include<bits/stdc++.h>

using namespace std;

const int N = 110;

int v[N];
int cestas[N];
int cestasrecebidas[N];
int pontos[N];

bool comp(int a,int b) {
	if(pontos[a]!=pontos[b]) return pontos[a]>pontos[b];
	if(cestas[a]*cestasrecebidas[b]!=cestas[b]*cestasrecebidas[a]) return cestasrecebidas[b]*cestas[a]>cestas[b]*cestasrecebidas[a];
	if(cestas[a]!=cestas[b]) return cestas[a]>cestas[b];
	return a<b;

}

int main() {
	int n,a,b,c,d;
	cin>>n;
	int instancia = 0;
	while(n!=0) {
		if(instancia) cout<<"\n";
		instancia++;
		memset(cestas,0,sizeof(cestas));
		memset(cestasrecebidas,0,sizeof(cestasrecebidas));
		memset(pontos,0,sizeof(pontos));
		for(int i=0;i<(n*(n-1))/2;i++) {
			cin>>a>>b>>c>>d;
			cestas[a]+=b;
			cestasrecebidas[c]+=b;
			cestas[c]+=d;
			cestasrecebidas[a]+=d;
			if(b>d) pontos[a]++;
			else pontos[c]++;
		}
		for(int i=1;i<=n;i++) {
			v[i]=i;
			if(cestasrecebidas[i]==0) cestasrecebidas[i]=1;
		}
		sort(v+1,v+n+1,comp);
		cout<<"Instancia "<<instancia<<"\n";
		cout<<v[1];
		for(int i=2;i<=n;i++)
			cout<<" "<<v[i];
		cout<<"\n";
		cin>>n;
	}
}