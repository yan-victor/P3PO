#include<bits/stdc++.h>

using namespace std;

int main() {
	int c;
	cin>>c;
	set<int> s;
	int resp=0;
	int a;
	for(int i=0;i<c;i++) {
		cin>>a;
		if(s.find(a)==s.end()) {
			resp++;
			s.insert(a);
		} else s.erase(a);
	}
	cout<<2*resp<<"\n";
}