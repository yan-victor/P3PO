#include<bits/stdc++.h>

using namespace std;

vector<int> v;

#define mid ((l+r)/2)

bool buscabin(int x,int l,int r) {
	//cout<<x<<" "<<l<<" "<<r<<"\n";
	if(v[mid]==x) return true;
	if(l==r) return false;
	if(v[mid]>x) return buscabin(x,l,mid);
	return buscabin(x,mid+1,r);
}

int main() {
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++) {
		int a;
		cin>>a;
		v.push_back(a);
	}
	cin>>k;
	for(int i=0;i<n;i++) {
		if(buscabin(k-v[i],0,n-1)) {
			cout<<v[i]<<" "<<k-v[i]<<"\n";
			break;
		}
	}
}