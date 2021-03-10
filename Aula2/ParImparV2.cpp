//OBI PJ Fase 1 - 2016 - Jogo de Par ou Ímpar

#include<bits/stdc++.h>

using namespace std;

int main() {
	int p,alice,bob;
	cin>>p>>alice>>bob;
	if((p+alice+bob)%2==0) cout<<"0\n";
	else cout<<"1\n";
}
