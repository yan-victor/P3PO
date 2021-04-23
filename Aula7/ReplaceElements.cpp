    //Educational Round 102 - A
  

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
        int maior = 0;
        int menor = INF;
        int menor_indice = 0;
        int menor2 = INF;
        for(int i=0;i<n;i++) {
          cin>>v[i];
          maior = max(maior,v[i]);
          if(v[i]<menor) {
            menor = v[i];
            menor_indice = i;
          }
        }
        for(int i=0;i<n;i++) {
          if(i!=menor_indice) menor2 = min(menor2,v[i]);
        }
        if(maior<=d||(menor+menor2)<=d) cout<<"YES\n";
        else cout<<"NO\n";
      }
    }
     
