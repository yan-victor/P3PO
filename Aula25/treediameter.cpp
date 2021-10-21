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

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(0);

	int T,n,m;
	cin>>T;
	//T=1;
	for(int t=0;t<T;t++) {
		cin>>n;
		int maior = 0;
		int dist;
		for(int i=0;i<=8;i++) {
			if((1<<i)>n) break;
			vector<int> a,b;
			for(int j=1;j<=n;j++) {
				//cout<<"teste "<<i<<" "<<j<<" "<<a.size()<<" "<<b.size()<<"\n";
				if((j&(1<<i))>0) b.push_back(j);
				else a.push_back(j);
			}
			cout<<a.size()<<" "<<b.size()<<" ";
			for(int el : a) {
				cout<<el<<" ";
			}
			for(int el : b) {
				cout<<el<<" ";
			}
			cout<<endl;
			cin>>dist;
			maior = max(maior,dist);
		}
		cout<<"-1 "<<maior<<endl;
	}
}

/*
1 -> A
10 -> B
11 -> B
100 -> A
101 -> A*/