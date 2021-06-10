#include<bits/stdc++.h>

using namespace std;

queue<int> fila;

int main() {
	int a,b;
	for(int i=0;i<16;i++) {
		fila.push(i);
	}
	for(int i=0;i<15;i++) {
		cin>>a>>b;
		int c = fila.front();
		fila.pop();
		int d = fila.front();
		fila.pop();
		if(a>b) fila.push(c);
		else fila.push(d); 
	}
	cout<<(char)((int)'A'+fila.front())<<"\n";
}