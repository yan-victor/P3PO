//Fila e Pilha

#include<bits/stdc++.h>
//#include<stack> 
//#include<queue>
//não necessário devido à bits


using namespace std;

queue<int> q;
stack<int> s;

int main() {
	s.push(1); //insere na pilha
	s.push(2);
	s.push(3);
	s.push(4);
	q.push(1); //insere na fila
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<"pilha\n";
	while(!s.empty()) {
		cout<<s.top()<<"\n"; //topo da pilha -> ultimo elemento inserido 
		s.pop(); //apaga o ultimo elemento inserido
	}
	cout<<"fila\n";
	while(!q.empty()) {
		cout<<q.front()<<"\n"; //frente da fila -> primeiro elemento inserido 
		q.pop(); //apaga o primeiro elemento inserido
	}
}