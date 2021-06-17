#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int> 
#define F first
#define S second

const int N = 100010;

int desempenho[N];
bool promovido[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,g,q;
	cin>>n>>g>>q;
	priority_queue< pii > pq;
	//priority_queue< tipo, vector< tipo >, greater< tipo > ordena a priority_queue ao contrario
	for(int i=1;i<=n;i++) {
		pq.push({500,-i});
		desempenho[i]=500;
	}
	int op;
	int id=0;
	for(int i=0;i<q;i++) {
		cin>>op;
		int a,b;
		if(op==1) {
			cin>>a>>b;
			desempenho[a]=b;
			pq.push({b,-a});
		} else {
			id++;
			cout<<"#"<<id<<": ";
			int cnt = 0;
			cin>>a;
			while(cnt<a) {
				pii atual = pq.top();
				if(desempenho[-atual.S]==atual.F&&promovido[-atual.S]==0) {
					cnt++;
					cout<<-atual.S<<" ";
					promovido[-atual.S]=1;
				}
				pq.pop();
			}
			cout<<"\n";
		}
	}
}