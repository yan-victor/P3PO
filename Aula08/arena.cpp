//Codeforces Edu 104 A - Arena

#include<bits/stdc++.h>

using namespace std;

const int N = 110;

int v[N];

int main() {
	int t;
	cin>>t;
	for(int T=0;T<t;T++) {
		int n;
		cin>>n;
		for(int i=0;i<n;i++) {
			cin>>v[i];
		}
		sort(v,v+n);
		int resp = n;
		for(int i=0;i<n;i++) {
			if(v[i]==v[0]) resp--;
		}
		cout<<resp<<"\n";
	}
}