

#include<bits/stdc++.h>

using namespace std;

const int N = 110;

int mat[N][N];
bool levantado[N][N];

int resp;

void f(int a,int b) {
	levantado[a][b] = 1;
	resp++;
	if(mat[a][b+1]>=mat[a][b]&&levantado[a][b+1]==0) f(a,b+1);
	if(mat[a][b-1]>=mat[a][b]&&levantado[a][b-1]==0) f(a,b-1);
	if(mat[a-1][b]>=mat[a][b]&&levantado[a-1][b]==0) f(a-1,b);
	if(mat[a+1][b]>=mat[a][b]&&levantado[a+1][b]==0) f(a+1,b);
}

int main() {
	int n,a,b;
	cin>>n;
	cin>>a>>b;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin>>mat[i][j];
		}
	}
	f(a,b);
	cout<<resp<<"\n";
}
