//OBI PJ Fase 1 - 2016 - Lâmpadas

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a = 0, b = 0;
	int l;
	for(int i=0;i<n;i++) {
		cin>>l;
		if(l==2) b = 1 - b;
		a = 1 - a;
	}
	cout<<a<<"\n";
	cout<<b<<"\n";
}

//0 -> 1
//1 -> 0
