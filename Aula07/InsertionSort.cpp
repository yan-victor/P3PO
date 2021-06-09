//Insertion Sort

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
    for(int i=0;i<n;i++) {
      int menor = i;
      for(int j=i;j<n;j++) {
        if(v[j]<v[menor]) menor=j;
      }
      swap(v[i],v[menor]);
    }
    for(int i=0;i<n;i++) {
      cout<<v[i]<<" ";
    }
  }
}

