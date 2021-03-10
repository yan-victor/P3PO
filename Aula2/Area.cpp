//URI 1012 - Área
#include<bits/stdc++.h>

using namespace std;

int main () {
  double a,b,c;
  cin>>a>>b>>c;
  cout.precision(3);
  cout.setf(ios::fixed);
  double pi = 3.14159;
  cout<<"TRIANGULO: "<<a*c/2<<"\n";
  cout<<"CIRCULO: "<<pi*c*c<<"\n";
  cout<<"TRAPEZIO: "<<(a+b)*c/2<<"\n";
  cout<<"QUADRADO: "<<b*b<<"\n";
  cout<<"RETANGULO: "<<a*b<<"\n";
}
