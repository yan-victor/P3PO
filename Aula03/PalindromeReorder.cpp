//CSES - Palindrome Reorder

//2n A's  AAAAAAA...AAAAAAA
//2m B's  AAAAAAAABBBBB....BBBBBAAAAAA
 
#include<bits/stdc++.h>
 
using namespace std;
 
const int N = 30;
 
int qtd[N];
char meio;
 
int main() {
	string s;
	string resposta = "";
	cin>>s;
	int tam = s.size();
	for(int i=0;i<tam;i++) {
		qtd[s[i]-'A']++;
	}
	int impar = 0;
	for(int i=0;i<26;i++) {
		if(qtd[i]%2==1) {
			impar++;
			meio = (char)(i+(int)'A');
			qtd[i]--;
		}
	
		qtd[i]/=2;
		for(int j=0;j<qtd[i];j++) {
			resposta+=(char)(i+(int)'A');
		}
	}
	if(impar>1) {
		cout<<"NO SOLUTION\n";
	} else if(impar==1&&tam%2==0) {
		cout<<"NO SOLUTION\n";
	} else {
		resposta+=meio;
		for(int i=25;i>=0;i--) {
			for(int j=0;j<qtd[i];j++) {
				resposta+=(char)(i+(int)'A');
			}
		}
		cout<<resposta<<"\n";
	}
}
