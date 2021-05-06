#include<bits/stdc++.h>

using namespace std;

const int N = 110;

int v[N];
int cestas[N];
int cestasrecebidas[N];
int pontos[N];

bool comp(int a,int b) {
	if(pontos[a]!=pontos[b]) return pontos[a]>pontos[b];
	double aavg,bavg;
	if(cestasrecebidas[a]>0) aavg = (double)cestas[a]/(double)cestasrecebidas[a];
	else aavg = (double)cestas[a];
	if(cestasrecebidas[b]>0) bavg = (double)cestas[b]/(double)cestasrecebidas[b];
	else bavg = (double)cestas[b];
	if(aavg!=bavg) return aavg>bavg;
	if(cestas[a]!=cestas[b]) return cestas[a]>cestas[b];
	return a<b;

}

int main() {
	int n,a,b,c,d;
	cin>>n;
	int intstancia = 0;
	while(n!=0) {
		intstancia++;
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
		}
		sort(v+1,v+n+1,comp);
		cout<<"Intstancia "<<intstancia<<"\n";
		for(int i=1;i<=n;i++)
			cout<<v[i]<<" ";
		cout<<"\n";
		cin>>n;
	}
}