//vector

#include<bits/stdc++.h>
//#include<vector> nao necessario com a bits

using namespace std;

vector<int> v;

int main() {
	v.push_back(10); //inserir 10
	cout<<"print\n";
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<"\n";
	v.pop_back(); //deleta ultimo elemento
	cout<<"print\n";
	for(int i=0;i<v.size();i++) {
		cout<<v[i]<<" ";
	}
	cout<<"\n";
	v.push_back(10);
	v.push_back(5);
	cout<<"print\n";
	for(int i : v) {
		cout<<i<<" ";
	}
	cout<<"\n";
	sort(v.begin(),v.end()); 
	for(int i : v) {
		cout<<i<<" ";
	}
	cout<<"\n";
	cout<<"tamanho = "<<v.size()<<"\n"; //tamanho do vector
	v.clear(); //limpa o vector 
	cout<<"print\n";
	for(int i : v) {
		cout<<i<<" ";
	}
	cout<<"\n";
}