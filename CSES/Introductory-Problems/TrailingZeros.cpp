/*
 - Problema: Trailing Zeros
 - Link: https://cses.fi/problemset/task/1618
 - Solução: contar quantos zeros há no final do resultado de n!
    por meio do uso da informação de que o número de zeros à direita
    é determinado pelo número de fatores 5 na decomposição de n!
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin >> n;

 long long zeros = 0;

 for (long long i = 5; n/i >= 1; i*=5){
   zeros += n/i;
 }

 cout << zeros << endl;
}
