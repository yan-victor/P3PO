#include<bits/stdc++.h>

using namespace std;

int main() {
	set<string> pessoas;
	char c;
	cin>>c;
	string s;
	while(c!='f') {
		if(c=='i') {
			cin>>s;
			pessoas.insert(s); //O(logN)
		}
		if(c=='e') {
			cin>>s;
			pessoas.erase(s); //O(logN)
		}
		if(c=='b') {
			cin>>s;
			if(pessoas.find(s)!=pessoas.end()) cout<<"encontrado\n"; //O(logN)
			else cout<<"nao encontrado\n";
		}
		if(c=='l') {
			for(auto it = pessoas.begin();it!=pessoas.end();++it) { //O(1) por iteração
				cout<<*it<<"\n";
			}
		}
		cin>>c;
	}
}


