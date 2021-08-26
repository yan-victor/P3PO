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
pii pares[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		//leitura
		int qnt=0;
		for(int i=1;i<=(1<<n-1);i++) {
			bool ok = 1;
			for(int j=1;j<=m;j++) {
				if(((1<<(pares[j].F))&i!=0) && (1<<(pares[j].S))&i!=0) {
					ok = 0;
					break;
				}	
			}
			qnt+=ok;
		}
	}
}

/*
(0,1)
(1<<0)
(1<<1)
(1<<i)
1&1 = 1
1&0 = 0
0&1 = 0
0&0 = 0

1|1 = 1
1|0 = 1
0|1 = 1
0|0 = 0
2^(pares[j]) 0000000...1...000
i =          00000000000000000
             00000000000000000
// a<<b -> left shift = a*2^b
// a>>b -> right shift = a/(2^b)


