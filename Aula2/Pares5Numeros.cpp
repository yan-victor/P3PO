//URI - 1065 - Pares entre 5 números

#include<bits/stdc++.h>

using namespace std;

int main() {
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int qnt = 0;
	if(a%2==0) qnt++;
	if(b%2==0) qnt++;
	if(c%2==0) qnt++;
	if(d%2==0) qnt++;
	if(e%2==0) qnt++;
	cout<<qnt<<" valores pares\n";
}
