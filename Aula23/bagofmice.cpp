#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define ll long long

const int N = 1010;
const int INF = 0x3f3f3f3f;
const ll mod = 1000000007;

double dp[N][N][2];
int v[N];

int f(int w,int b,int p) {
	if(w==0) return 0.0;
	if(b<0) return 1.0;
	if(dp[w][b][p]>-1.0) return dp[w][b][p];
	if(p==0) {
		if(b==0) return 1.0;
		dp[w][b][p] = ((double)w/(double)(w+b))+((double)b*f(w,b-1,1)/(double)(w+b));
	} else {
		if(b==0) return 0.0;
		dp[w][b][p] = ((double)b/(double)(w+b))*(((double)w*f(w-1,b-1,0)/(double)(w+b-1))+((double)(b-1)*f(w,b-2,0)/(double)(w+b-1)));
	}
	return dp[w][b][p];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T,n,m,d,w,b;
	//cin>>T;
	T=1;
	for(int t=0;t<T;t++) {
		cin>>w>>b;
		for(int i=0;i<=w;i++) {
			for(int j=0;j<=b;j++) {
				dp[i][j][0] = -1.0;
				dp[i][j][1] = -1.0;
			}
		}
		cout<<f(w,b,0)<<"\n";
	}
}


//f(w,b,0) = w/(w+b)+ b*f(w,b-1,1)/(w+b)

//f(w,b,1) = (b/(w+b))*(w*f(w-1,b-1,0)/(w+b-1)+(b-1)*f(w,b-2,0)/(w+b-1))