//CSES - Distinct Numbers

#include<bits/stdc++.h>

using namespace std;

const int N = 200010;

int v[N];

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	sort(v,v+n);
	int resp=1;
	for(int i=1;i<n;i++) {
		if(v[i]!=v[i-1]) resp++;
	}
	cout<<resp<<"\n";
}