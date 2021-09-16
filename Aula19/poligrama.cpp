//OBI 2021 P2 - Fase 2

//N possui O(logN) divisores

//N = p1^(x1)*p2^(x2)*...*
//divisores = (x1+1)*(x2+1)*...*(xk+1)
//N = 2^x -> x = log2(N) -> divisores = x+1
//N = 3^y -> y = log3(N) -> divisores = y+1

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 200010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

//int v[N];
int qnt[30];
int qnt2[30];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	//T=1;
	for(int t=0;t<T;t++) {
		string s;
		//leitura
		string resposta = '*';
		for(int i=1;i<=n/2;i++) {
			if(s.size()%i==0) {
				memset(qnt,0,sizeof(qnt));
				for(int j=1;j<=i;j++) {
					qnt[(int)(s[j]-'a')]++;
				}
				int j = i+1;
				bool ok = 1;
				while(j<s.size()) {
					memset(qnt2,0,sizeof(qnt2));
					for(int k=0;k<i;k++) {
						qnt2[(int)(s[j+k]-'a')]++;
					}
					for(int k=0;k<26;k++) {
						if(qnt[k]!=qnt2[k]) ok = 0;
					}
					if(ok==0) break;
				}
				//if(ok==1) resposta = s[1..i];
			}
		}
		//saida
	}
}
