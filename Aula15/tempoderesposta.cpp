#include<bits/stdc++.h>

using namespace std;

const int N = 110;

int rec[N];
int resp[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin>>n;
	int t=1;
	char lc;
	for(int i=0;i<n;i++) {
		char c;
		int x;
		cin>>c>>x;
		if(c=='R') {
			if(lc!='T') t++;
			rec[x]=t;
		} 
		if(c=='E') {
			if(lc!='T') t++;
			resp[x]+=t-rec[x];
			rec[x]=-rec[x];
		}
		if(c=='T') {
			t+=x;
		}
		lc=c;
	}
	for(int i=1;i<=100;i++) {
		if(rec[i]) cout<<i<<" "<<(rec[i]<0 ? resp[i] : -1)<<"\n";
	}
}