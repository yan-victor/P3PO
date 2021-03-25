    //CF Gym 2020 ICPC Shanghai - G
    
    /*f1 f2 f3 ... fn
    g(f1,f2) + g(f1,f3) + ... + g(f1,fn)
    + g(f2,f3) + ... + g(f2,fn)
    + ... +
    + g(f(n-1),fn)
     
    g(x,y) = 1 se x*y é par -> 1 se x ou y são pares
     
    1,1,2,3,5,8,13,21,34
    1,1,0,1,1,0,1,1,0,1,1,0,...
     
    f1,f2,..., fn
     
    fibpar = (n/3)
    fibimpar = n - fibpar
    (x,y) -> x é par, y é impar
    resp = fibpar*fibimpar
    (x,y) -> x,y pares
    resp += fibpar*(fibpar-1)/2
    */
     
    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main() {
      long long int n;
      cin>>n;
      long long int fibpar = (n/3);
      long long int fibimpar = n - fibpar;
      //(x,y) -> x é par, y é impar
      long long int resp = fibpar*fibimpar; 
      //(x,y) -> x,y pares
      resp += fibpar*(fibpar-1)/2;
      cout<<resp<<"\n";
    }
