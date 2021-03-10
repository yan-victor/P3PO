/*d = distancia
v = velocidade (km/h)
t = tempo (h)
l = gasto por litro (km/l)

d = v*t

consumo = d/l 


h*(km/h)/(km/l)  = l*/

//URI - 1017 - Gasto de Combustível

#include<bits/stdc++.h>

using namespace std;

int main() {
	int t,v;
	cin>>t>>v;
	int l = 12;
	int d = v*t;
	cout.precision(3);
	cout.setf(ios::fixed);
	cout<<(double)d/(double)l<<"\n";
}
