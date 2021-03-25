//URI - 1120

#include<bits/stdc++.h>

using namespace std;

int main() {
  char d;
  string s;
  cin>>d>>s;
  while(d!='0') {
    string resp = "";
    bool nulo = 1;
    for(int i=0;i<s.size();i++) {
      if(s[i]!=d) {
        if(s[i]!='0') {
          nulo = 0;
          resp += s[i];
        } else if(nulo==0) {
          resp += s[i];
        }
      }
    }
    if(resp.size()==0) cout<<"0\n";
    else cout<<resp<<"\n";
    cin>>d>>s;
  }
}
