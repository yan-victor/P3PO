#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	scanf("%d",&t);
	string a;
	stack<char> pilha;
	for(int i=0;i<t;i++) {
		int chave=0,cochete=0,parenteses=0;
		cin>>a;
		bool ok = 1;
		for(char c : a) {
			if(c=='{'||c=='['||c=='(') {
				pilha.push(c);
				if(c=='{') chave++;
				if(c=='[') cochete++;
				if(c=='(') parenteses++;

			} else if(c=='}') {
				if(!pilha.empty()&&pilha.top()=='{') {
					pilha.pop();
					chave--;
				} else {
					ok = 0;
					break;
				}
			} else if(c==']') {
				if(!pilha.empty()&&pilha.top()=='[') {
					pilha.pop();
					cochete--;
				} else {
					ok = 0;
					break;
				}
			} else if(c==')') {
				if(!pilha.empty()&&pilha.top()=='(') {
					pilha.pop();
					parenteses--;
				} else {
					ok = 0;
					break;
				}
			} 
		}
		if(chave>0||parenteses>0||cochete>0) ok = 0;
		if(ok) printf("S\n");
		else printf("N\n");
		while(!pilha.empty()) {
			pilha.pop();
		}
	}
}

