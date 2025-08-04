/*
 - Problema: Increasing Array  
 - Link: https://cses.fi/problemset/task/1094
 - Breve explicação:  O problema pede que a sequência de números não seja decrescente.
 - Solução: Percorre o array, incrementando elementos menores que o anterior para garantir uma sequência não decrescente.
   Por exemplo: a sequência 3 2 5 7 precisaria de incrementos, tornando-se 3 3 5 7 .
 */

#include <bits/stdc++.h>
using namespace std;

int main(){  
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
  
    long long moves = 0;    
    for (int i = 1; i < n; i++){
        if (v[i] < v[i-1]){
            moves += v[i-1] - v[i];
            v[i] = v[i-1];
        } 
    }
  
    cout << moves << "\n";
    return 0;
}
