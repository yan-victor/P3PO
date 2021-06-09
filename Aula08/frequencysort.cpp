//Frequency Sort

#include<bits/stdc++.h>

using namespace std;

const int N = 1000010;
const int INF = 0x3f3f3f3f;

int v[N];
int freq[N]; 

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
      cin>>v[i];
      freq[v[i]]++;
    }
    int pos = 0;
    for(int i=0;i<=100;i++) {
    	for(int j=0;j<freq[i];j++) {
    		v[pos] = i;
    		pos++;
    	}
    }
    for(int i=0;i<n;i++) {
      cout<<v[i]<<" ";
    }
}