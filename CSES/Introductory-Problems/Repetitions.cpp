/*
  - Problema: Repetitions
  - Link: https://cses.fi/problemset/task/1069 
  - Solução:  imprimir o comprimento da maior sequência de char repetidos da string
*/


#include <bits/stdc++.h>
using namespace std;

int main(){    
    int n;
    int length = 1;
    int cont = 1;
    string s;
    cin >> s;
    for (int i = 1; i <= s.size(); i++){
        if(s[i] == s[i-1]){
            cont ++;
        }else{
            cont = 1;
        }
        if (cont > length){
            length = cont;
        }
    }
    cout << length << "\n";    
    return 0;
}
