//URI - 1848

#include<bits/stdc++.h>

using namespace std;

int valor[3];

int main() {
  valor[0] = 4;
  valor[1] = 2;
  valor[2] = 1;
  string s;
  int resp = 0;
  for(int i=0;i<3;i++) {
    cin>>s;
    while(s[0]!='c') {
      for(int i=0;i<3;i++) {
        if(s[i]=='*') resp+=valor[i];
      }
      cin>>s;
    }
    if(s[0]=='c') {
      cout<<resp<<"\n";
      resp = 0;
      cin>>s;
    }
  }
}
