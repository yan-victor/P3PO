//C++ Sort

#include<bits/stdc++.h>

using namespace std;

const int N = 110;
const int INF = 0x3f3f3f3f;

int v[N]; 

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
      cin>>v[i];
    }
    sort(v,v+n); //O(Nlogn)
    for(int i=0;i<n;i++) {
      cout<<v[i]<<" ";
    }
}