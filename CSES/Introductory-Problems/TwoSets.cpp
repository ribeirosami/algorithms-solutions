/*
  - Problema: Two Sets
  - Link: https://cses.fi/problemset/task/1092
  - Solução: Dizer se é possível separar os números da sequência de
    1 a n em dois conjuntos de igual valor de soma de elementos
    e imprimir um exemplo dessa divisão de dois conjuntos
    se for possível a divisão.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long soma = 0;
    for (int i=1; i<=n; i++){
        soma += i;
    }

    if (soma % 2 != 0){
        cout << "NO" << endl;
        return 0;
    } 
    
    cout << "YES" << endl;
    int metade = soma / 2;
    long long sum_atual = 0;
    vector <int> set1;
    vector <int> set2;

    for(int i=n; i>=1; i--){
        if ((sum_atual + i) <= metade){ //se o elemento atual somado ao que já tem no set não ultrapassa a metade da soma total
            sum_atual += i;             //ele será incluso no set1
            set1.push_back(i); //adicionando elemento no conjunto 1
        } else { //caso o elemento atual faça a soma do set1 exceder a metade da soma total
            set2.push_back(i); //adicionamos esse elemento no conjunto 2 (set2)
        }
    }

    cout << set1.size() << endl;
    for(int num : set1){ //para cada numero num no set1
        cout << num << " "; //imprimir o numero num
    }
    cout << endl;

    cout << set2.size() << endl;
    for (int num : set2){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
