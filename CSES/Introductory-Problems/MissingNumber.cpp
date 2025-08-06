/*
  - Problema: Missing Number
  - Link: https://cses.fi/problemset/task/1083
  - Solução: imprimir o número que falta na sequência de 1 a n.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> x;
    int y;
    int missing;
    
    for(int i=0; i < n-1; i++){
        cin >> y;
        x.push_back(y);
    }
    sort(x.begin(), x.end());
    
    for(int i=0; i < n-1; i++){
        if (x[i] == i+1){
        } else {
            missing = i+1;
            break;
        }
    }    
    cout << missing << "\n";    
    return 0;
}
