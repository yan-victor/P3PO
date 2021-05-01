//OBI 2018 P2 Fase 3 - Bolas O(N)

#include<bits/stdc++.h>

using namespace std;

const int N = 11;
const int INF = 0x3f3f3f3f;

int v[N];
int freq[N]; 

int main() {
    for(int i=0;i<8;i++) {
      cin>>v[i];
      freq[v[i]]++;
    }
    int maximo = 0;
    for(int i=0;i<=9;i++) {
    	if(freq[i]>maximo) maximo = freq[i];
    }
    if(maximo>4) cout<<"N\n";
    else cout<<"S\n";
}