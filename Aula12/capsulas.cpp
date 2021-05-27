#include<bits/stdc++.h>

using namespace std;

#define mid ((l+r)/2)

const int N = 100010;

int v[N];
int n;

bool valid(int d,int f) {
	int total = 0;
	for(int i=0;i<n;i++) {
		total += d/v[i];
	}
	if(total>=f) return 1;
	return 0;
}

int buscabinaria(int l,int r,int f) {
	if(l==r) return l;
	if(valid(mid,f)) return buscabinaria(l,mid,f);
	return buscabinaria(mid+1,r,f);
}

int main() {
	int f;
	cin>>n>>f;
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	cout<<buscabinaria(1,100000000,f)<<"\n";
}