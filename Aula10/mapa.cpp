#include<bits/stdc++.h>

using namespace std;

const int N = 110;

char mapa[N][N];

int fim_a,fim_b;

void f(int a,int b,int pa,int pb) {
	if(mapa[a][b+1]=='H'&&(a!=pa||b+1!=pb)) {
		f(a,b+1,a,b);
		return;
	}
	if(mapa[a][b-1]=='H'&&(a!=pa||b-1!=pb)) {
		f(a,b-1,a,b);
		return;
	}
	if(mapa[a-1][b]=='H'&&(a-1!=pa||b!=pb)) {
		f(a-1,b,a,b);
		return;
	}
	if(mapa[a+1][b]=='H'&&(a+1!=pa||b!=pb)) {
		f(a+1,b,a,b);
		return;
	}
	fim_a=a;
	fim_b=b;
}

int main() {
	int l,c;
	cin>>l>>c;
	int a,b;
	for(int i=1;i<=l;i++) {
		for(int j=1;j<=c;j++) {
			cin>>mapa[i][j];
			if(mapa[i][j]=='o') {
				a=i;
				b=j;
			}
		}
	}
	f(a,b,-1,-1);
	cout<<fim_a<<" "<<fim_b<<"\n";
}