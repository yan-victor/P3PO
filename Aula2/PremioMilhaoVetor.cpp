#include<bits/stdc++.h>

using namespace std;

int v[1010];

//0,1,2,3,...,1009

int main() {
	int n;
	cin>>n;
	int qnt = 0;
	for(int i=1;i<=n;i++) {
		cin>>v[i];
	}
	for(int i=1;i<=n;i++) {
		qnt+=v[i];
		if(qnt>=1000000) {
			cout<<i<<"\n";
			break;
		}
	}
}

//0 -> 1
//1 -> 0
