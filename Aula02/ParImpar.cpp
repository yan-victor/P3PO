// OBI PJ fase 1 - 2016 - Jogo de Par ou Ímpar

#include<bits/stdc++.h>

using namespace std;

int main() {
	int p,alice,bob;
	cin>>p>>alice>>bob;
	if(p==0) {
		if((alice+bob)%2==0) cout<<"0\n";
		else cout<<"1\n";
	} else {
		if((alice+bob)%2==0) cout<<"1\n";
		else cout<<"0\n";
	}
}
