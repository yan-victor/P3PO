#include<bits/stdc++.h>

using namespace std;

const int N = 40;

#define F first
#define S second

pair<string,int> v[N];

bool comp(pair<string,int> a,pair<string,int> b) {
	if(a.S!=b.S) return a.S>b.S;
	return a.F<b.F;
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>v[i].F>>v[i].S;
	}
	sort(v,v+n,comp);
	for(int i=0;i<n/3;i++) {
		cout<<"Time "<<i+1<<"\n";
		for(int j=0;i+(n/3)*j<n;j++) {
			cout<<v[i+(n/3)*j].F<<" "<<v[i+(n/3)*j].S<<"\n";
		}
		cout<<"\n";
	}
}


