//URI - 1015

#include<bits/stdc++.h>

using namespace std;

int main () {
  double x1,y1;
  double x2,y2;
  cin>>x1>>y1>>x2>>y2;
  cout.precision(4);
  cout.setf(ios::fixed);
  cout<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<<"\n";
}
