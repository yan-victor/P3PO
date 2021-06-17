#include<bits/stdc++.h>

using namespace std;

const int N = 310;

bool carimbado[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,c,m;
	cin>>n>>c>>m;
	int a;
	int resp=c;
	set<int> s;
	for(int i=0;i<c;i++) {
		cin>>a;
		carimbado[a]=1;
	}
	for(int i=0;i<m;i++) {
		cin>>a;
		if(s.find(a)==s.end()) {
			s.insert(a);
			if(carimbado[a]==1) resp--;
		}
	}
	cout<<resp<<"\n";
}