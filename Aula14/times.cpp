#include<bits/stdc++.h>

using namespace std;

const int N = 1010;
#define F first
#define S second

vector<string> v[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n,t;
	cin>>n>>t;
	string s;
	int a;
	priority_queue< pair<int,string> > pq;
	for(int i=0;i<n;i++) {
		cin>>s>>a;
		pq.push({a,s});
	}
	int i=0;
	while(!pq.empty()) {
		pair<int,string> atual = pq.top();
		v[i].push_back(atual.S);
		pq.pop();
		i = (i+1)%t;
	}
	for(int i=0;i<t;i++) {
		sort(v[i].begin(),v[i].end());
	}
	for(int i=0;i<t;i++) {
		if(i>0) cout<<"\n";
		cout<<"Time "<<i+1<<"\n";
		for(string c : v[i]) {
			cout<<c<<"\n";
		}
	}
}