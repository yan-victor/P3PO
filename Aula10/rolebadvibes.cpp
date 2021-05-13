#include<bits/stdc++.h>

using namespace std;

const int N = 1010;

#define F first 
#define S second

pair<int,char> v[N*N];

bool comp(pair<int,char> a,pair<int,char> b) {
	if(a.S != b.S) return a.S=='V';
	return a.F > b.F;
}

int main() {
	int n,m;
	cin>>n>>m;
	string s;
	for(int i=0;i<n*m;i++) {
		cin>>s;
		v[i].F = (int)(s[0]-'0');
		v[i].S = s[1];
	}
	sort(v,v+n*m,comp);
	for(int i=0;i<n*m;i++) {
		cout<<v[i].F<<v[i].S<<"\n";
	}
}