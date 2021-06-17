#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int q;
	cin>>q;
	deque<int> fila;
	bool reverso = 0;
	for(int i=0;i<q;i++) {
		string s;
		cin>>s;
		if(s=="front") {
			if(fila.empty()) {
				cout<<"No job for Ada?\n";
				continue;
			}
			if(reverso==0) {
				cout<<fila.front()<<"\n";
				fila.pop_front();
			} else {
				cout<<fila.back()<<"\n";
				fila.pop_back();
			}
		}
		if(s=="back") {
			if(fila.empty()) {
				cout<<"No job for Ada?\n";
				continue;
			}
			if(reverso==1) {
				cout<<fila.front()<<"\n";
				fila.pop_front();
			} else {
				cout<<fila.back()<<"\n";
				fila.pop_back();
			}
		}
		if(s=="push_back") {
			int a;
			cin>>a;
			if(reverso==0) {
				fila.push_back(a);
			} else fila.push_front(a);
		} 
		if(s=="toFront") {
			int a;
			cin>>a;
			if(reverso==1) {
				fila.push_back(a);
			} else fila.push_front(a);
		}
		if(s=="reverse") {
			reverso = 1-reverso;
		}
	}
}