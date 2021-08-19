/*x 1 2 3 4 5
1 0 1     3
2 1 0
3     0
4       0   
5 3       0 

bool matriz[N][N]; 
map< tipo1, tipo2 >
map< pair<int,int>, int> pontes;

pontes[(x,y)] = 1 se existe ponte entre x e y e 0 caso contrario

((1,2))
10^5 * log 10^5 < 2*10^6 < 10^8
O(MlogM)
10^8

2^10 = 1000 = 10^3
10^6 = 2^20
*/

//Neps - Tá Ligado?

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
map< pii, bool> pontes;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	int tipo,a,b;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>m;
		for(int i=0;i<m;i++) {
			cin>>tipo>>a>>b;
			if(tipo==1) {
				pontes[pii(a,b)] = 1;
				pontes[pii(b,a)] = 1;
			} else {
				cout<<pontes[pii(a,b)]<<"\n";
			}
		}
	}
}

