#include<bits/stdc++.h>

using namespace std;

const int N = 30;
const int INF = 0x3f3f3f3f;

#define F first
#define S second

pair<int,int> vogalproxima[N];

char consoanteproxima[N];

char alfabeto[24] = {'a','b','c',...,'z'};
char vogal[5] = {'a','e','i','o','u'};

string cifra[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string p;
	cin>>p;

	for(int i=0;i<30;i++) {
		vogalproxima[i].F = INF;
	}

	for(int i=0;i<5;i++) {
		int id = (int)(vogal[i]-'a');
		for(int j=id-1;j>=0;j--) {
			if(vogalproxima[j].F>id-j) {
				vogalproxima[j].F=id-j;
				vogalproxima[j].S=id;
			}
		}
		for(int j=id+1;j<26;j++) {
			if(vogalproxima[j].F>=j-id) {
				vogalproxima[j].F=j-id;
				vogalproxima[j].S=id;
			}
		}
	}

	for(int i=0;i<24;i++) {
		consoanteproxima[i]=alfabeto[i];
		for(int j=i+1;j<26;j++) {
			bool consoante=1;
			for(int k=0;k<5;k++) {
				if((int)(vogal[k]-'a')==i) {
					consoante=0;
					break;
				}
			}
			if(consoante) {
				consoanteproxima[i]=j;
				break;
			}
		}
	}

	for(int i=0;i<26;i++) {
		if(vogalproxima[i].S==)
		cifra[i]+=(char)((int)'a'+i);
		cifra[i]+=vogalproxima[i].S;
		cifra[i]+=consoanteproxima[i];
	}
	string resp="";
	for(char c : p) {
		resp+=cifra[(int)(c-'a')];
	}
	cout<<resp<<"\n";
}
