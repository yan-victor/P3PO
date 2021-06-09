//OBI PJ Fase 1 - Móbile

#include<bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==b+c+d && d==b+c && b==c) cout<<"S\n";
	else cout<<"N\n";
}
