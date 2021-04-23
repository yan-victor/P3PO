//OBI PJ 2013 Fase 1 - Saldo do Vovô

#include<bits/stdc++.h>

using namespace std;


int main() {
	int n,s,a;
	cin>>n>>s;
	int resp = s;
	for(int i=0;i<n;i++) {
		cin>>a;
		s+=a;
		if(s<resp) resp = s;
	}
	cout<<resp<<"\n";
}
