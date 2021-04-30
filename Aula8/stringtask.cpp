#include<bits/stdc++.h>

using namespace std;

const int N = 110;

char vogal[6] = {'a','e','i','o','u','y'};

int main() {
	string s;
	cin>>s;
	string resp = "";
	int dif = 'a' - 'A';
	for(int i=0;i<s.size();i++) {
		if(s[i]<='Z') {
			s[i] = (char)((int)s[i] + dif);
		}
		bool vog = 0;
		for(int j=0;j<6;j++) {
			if(vogal[j]==s[i]) {
				vog = 1;
			}
		}
		if(vog) continue;
		resp+='.';
		resp+=s[i];
	}
	cout<<resp<<"\n";
}