//fibonacci 

#include<bits/stdc++.h>

using namespace std;

int f[110];

int fib(int n) {
	if(f[n]>0) return fib[n]; 
	if(n==1) return 1;
	if(n==0) return 1;
	//return fib(n-1)+fib(n-2);
	return f[n]=fib(n-1)+fib(n-2);
}

int main() {
	int n;
	cin>>n;
	cout<<fib(n)<<"\n";
}

//O(2^n) -> O(n)


