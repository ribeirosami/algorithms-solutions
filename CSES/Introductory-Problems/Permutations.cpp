/*
  - Problema: Permutations
  - Link: https://cses.fi/problemset/task/1070
  - Solução: Imprimir os números pares depois ímpares para
    garantir que os números adjacentes tenham diferença maior que 1
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << "1";
    } else if (n <= 3) {
        cout << "NO SOLUTION";
    } else {
        // imprimir os pares em ordem decrescente
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        // imprimir os ímpares em ordem decrescente
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    
    return 0;
}
