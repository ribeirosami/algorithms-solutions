/*
  - Problema: bit strings
  - Link: https://cses.fi/problemset/task/1617
  - Solução: Precisamos calcular o número de strings binárias
    cada posição na string pode ser 0 ou 1
    então para n posições temos 2^n possibilidades.
*/

#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

long long mod_pow(long long base, long long expoente){
  long long resultado = 1;
  while (expoente > 0){
    if(expoente % 2 == 1){
      resultado = (resultado * base) % mod;
    }
    base = (base * base) % mod;
    expoente /= 2;
  }
  return resultado;
}
int main() {
    long long n;
    cin >> n;
    cout << mod_pow(2, n) << endl;
    return 0;
}
