//OBI 2008 Fase 1 - Ogros

#include<bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define mid ((l+r)/2)

const int INF = 0x3f3f3f3f;
const int N = 100010;

pair<int,int> intervalo[N];
int v[N];

int buscabinaria(int l,int r,int f) {
	if(l==r) return v[l];
	if(intervalo[mid].F<=f&&intervalo[mid].S>f) return v[mid];
	if(f<intervalo[mid].F) return buscabinaria(l,mid,f);
	return buscabinaria(mid+1,r,f);
}

int main() {
	int f,n,m;
	cin>>n>>m;
	intervalo[0].F = 0;
	for(int i=1;i<n;i++) {
		cin>>intervalo[i].F;
	}
	for(int i=0;i<n-1;i++) {
		intervalo[i].S = intervalo[i+1].F;
	}
	intervalo[n-1].S = INF;
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	for(int i=1;i<=m;i++) {
		cin>>f;
		int l=0,r=n-1;
		int resp = 0;
		while(l<r) {
			if(intervalo[mid].F<=f&&intervalo[mid].S>f) {
				resp = v[mid];
				break;
			}
			if(f<intervalo[mid].F) {
				r=mid;
			} else {
				l=mid+1;
			}
		}
		if(resp==0) resp = v[l];
		cout<<resp<<" ";
	}
	cout<<"\n";
}