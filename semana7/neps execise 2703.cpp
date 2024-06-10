//Extremos de uma Sequência

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    list<int> valorCarta;
    int valor;

    for(int i; i < 4; i++){

        cin >> valor;
        valorCarta.push_front(valor);
    }

    valorCarta.sort();
    cout << valorCarta.back() + valorCarta.front() << endl;

    return 0;
}
