//URI - 1035

#include<bits/stdc++.h>

using namespace std;

//1 && 1 == 1
//1 && 0 == 0
//0 && 1 == 0
//0 && 0 == 0

//1 || 1 == 1
//1 || 0 == 1
//0 || 1 == 1
//0 || 0 == 0

int main () {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(b>c && d>a && c+d>a+b && c>0 && d>0 && a%2==0) {
    cout<<"Valores aceitos\n";
  } else {
    cout<<"Valores nao aceitos\n";
  }
}
