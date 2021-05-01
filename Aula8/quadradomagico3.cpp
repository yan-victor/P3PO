//Neps - Quadrado Magico 3x3

#include<bits/stdc++.h>

using namespace std;

int matriz[5][5];

int main() {
	int sum = 0;
	for(int i=1;i<=3;i++) {
		for(int j=1;j<=3;j++) {
			cin>>matriz[i][j];
			sum += matriz[i][j];
		}
	}
	if(sum%3!=0) cout<<"NAO\n";
	else {
		int valor = sum/3;
		for(int i=1;i<=3;i++) {
			sum = 0;
			for(int j=1;j<=3;j++) {
				sum+=matriz[i][j];
			}
			if(valor!=sum) {
				cout<<"NAO\n";
				return 0;
			}
		}
		for(int i=1;i<=3;i++) {
			sum = 0;
			for(int j=1;j<=3;j++) {
				sum+=matriz[j][i];
			}
			if(valor!=sum) {
				cout<<"NAO\n";
				return 0;
			}
		}
		sum = 0;
		for(int i=1;i<=3;i++) {
			sum+=matriz[i][i];
		}
		if(valor!=sum) {
			cout<<"NAO\n";
			return 0;
		}
		sum = 0;
		for(int i=1;i<=3;i++) {
			sum+=matriz[i][4-i];
		}
		if(valor!=sum) {
			cout<<"NAO\n";
			return 0;
		}
		cout<<"SIM\n";
	}
}