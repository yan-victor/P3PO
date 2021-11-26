//a = p^3, 1,p,p^2,p^3
//a = pq, 1,p,q,pq

//(1) a = p^3 => p >= d+1 p>=2 a = 5^3 = 125 =
//(2) a = pq, p >= d+1, q >= 2d+1 p=5 q=11 pq = 55

//d+1,2d+1
//p é primo se não possui divisores entre 2 e sqrt(p)

#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 20100;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

bool composto[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m;
	cin>>T;
	//T=1; 
	for(int i=2;i<N;i++) {
		for(int j=2;j<=min(200,i-1);j++) {
			if(i%j==0) composto[i]=1;
		}
	} //O(Nsqrt(N))
	for(int t=0;t<T;t++) {
		int d;
		cin>>d;
		int p,q;
		for(int i=d+1;i<N;i++) {
			if(!composto[i]) {
				p=i;
				break;
			}
		}
		for(int j=p+d;j<N;j++) {
			if(!composto[j]) {
				q=j;
				break;
			}
		}
		cout<<p*q<<"\n";
	}
}