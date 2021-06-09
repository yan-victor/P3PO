//Bubble Sort

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
    for(int i=0;i<n;i++) {
      for(int j=i+1;j<n;j++) {
        if(v[j]<v[i]) swap(v[i],v[j]);
      }
    }
    for(int i=0;i<n;i++) {
      cout<<v[i]<<" ";
    }
}