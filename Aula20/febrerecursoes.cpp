/*f(k) = f(k-1)*a[1]+f(k-2)*a[2]+...+f(k-n)*a[n]

O((k-n)*n) <= 5*10^2 * 5*10^2 = 2.5 * 10^5

MA >= MG
(k-n)*n = P
((k-n)+(n))/2 >= sqrt(((k-n)*n))
k/2 >= sqrt(P) -> P <= (k/2)^2*/

//Neps - Febre de Recursões

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

ll f[N];
ll a[N];


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,k;
	ll m;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>n>>k>>m;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
		}
		for(int i=1;i<=n;i++) {
			cin>>f[i];
		}
		for(int i=n+1;i<=k;i++) {
			for(int j=1;j<=n;j++) {
				f[i] = (f[i] + a[j]*f[i-j])%m;
			}
		}
		cout<<f[k]<<"\n";
	}
}