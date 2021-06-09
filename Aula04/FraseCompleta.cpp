//URI - 1551

#include<bits/stdc++.h>

using namespace std;

bool alfabeto[30];

int main() {
  int n;
  cin>>n;
  string s;
  getline(cin,s);
  for(int i=0;i<n;i++) {
    getline(cin,s);
    //cout<<s<<"\n";
    for(char c : s) {
      if(c==' '||c==',') continue;
      alfabeto[c-'a']=1;
    }
    int qnt=0;
    for(int i=0;i<26;i++) {
      if(alfabeto[i]) qnt++;
    }
   // cout<<qnt<<"\n";
    if(qnt==26) cout<<"frase completa\n";
    else if(qnt>=13) cout<<"frase quase completa\n";
    else cout<<"frase mal elaborada\n";
    for(int i=0;i<26;i++) {
      alfabeto[i]=0;
    }
  }
}
