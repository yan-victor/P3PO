#include<bits/stdc++.h>

using namespace std;

const int N = 11;
const int INF = 0x3f3f3f3f;

int v[N];

int main() {
    for(int i=0;i<8;i++) {
      cin>>v[i];
    }
    sort(v,v+8);
    while(next_permutation(v,v+8)) {
        bool ok = 1;
        for(int i=0;i<7;i++) {
            if(v[i]==v[i+1]) {
                ok = 0;
                break;
            }
        }
        if(ok==1) {
            cout<<"S\n";
            return 0;
        }
    }
    cout<<"N\n";
}