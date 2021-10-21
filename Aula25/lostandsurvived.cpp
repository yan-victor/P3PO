#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 100010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

int pai[N];
int peso[N];
multiset<int> s;
int qnt[N];

int find(int x) {
	if(x==pai[x]) return x;
	return pai[x] = find(pai[x]);
}

void join(int x,int y) {
	x = find(x),y = find(y);
	if(x==y) return;
	s.erase(s.find(qnt[x]));
	s.erase(s.find(qnt[y]));
	s.insert(qnt[x]+qnt[y]);
	if(peso[x]>peso[y]) {
		pai[y] = x;
		qnt[x] +=qnt[y];
	} else if(peso[y]>peso[x]) {
		pai[x] = y;
		qnt[y] += qnt[x];
	} else {
		pai[x] = y;
		peso[y]++;
		qnt[y] += qnt[x];
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		int a,b;
		for(int i=1;i<=n;i++) {
			pai[i]=i;
			s.insert(1);
			qnt[i]=1;
		}
		for(int i=0;i<m;i++) {
			cin>>a>>b;
			join(a,b);
			if(s.size()==1) {
				cout<<0<<"\n";
			} else {
				multiset<int>::iterator inicio = s.begin();
				multiset<int>::iterator fim = s.end();
				fim--;
				/*for(auto el : s) {
					cout<<el<<" ";
				}
				cout<<"\n";
				cout<<*fim<<"\n";
				cout<<*inicio<<"\n";*/
				cout<<(*fim)-(*inicio)<<"\n";
			}
		}
	}
}