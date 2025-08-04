/*
  - Problema: Weird Algorithm
  - Link: https://cses.fi/problemset/task/1068
  - Solução: tendo um numero inicial n, se ele é par, dividimos por 2; 
    caso ele seja impar, multiplicamos por 3 e adicionamos 1
    repetimos essas atualizações do valor de n até que n seja = 1
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;    
    while (n != 1){
        cout << n << " ";   
        if (n % 2 == 0){
            n = n/2;
        } else {
            n = (n*3) + 1;
        }
    }
        cout << n << "\n";
    return 0;
}
