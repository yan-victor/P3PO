#include<bits/stdc++.h>

using namespace std;

const int N = 110;
const int INF = 0x3f3f3f3f;

int v[N]; 

int main() {
    int t;
    cin>>t;
    for(int T=0;T<t;T++) {
    	int n,d;
    	cin>>n>>d;
    	for(int i=0;i<n;i++) {
    		cin>>v[i];
    	}
    	sort(v,v+n);
    	if(v[n-1]<=d || (v[0]+v[1]<=d)) cout<<"YES\n";
    	else cout<<"NO\n";
    }
}