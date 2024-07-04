#include <bits/stdc++.h>
using namespace std;

int main() {

    int valorInicial, aumentoDiario, diaChegada;
    cin >> valorInicial >> aumentoDiario >> diaChegada;

    if(diaChegada == 1)
        cout << valorInicial*31 << endl;

    else if(diaChegada < 16)
        cout << (valorInicial + aumentoDiario * (diaChegada - 1))*(32 - diaChegada);

    else
        cout << (valorInicial + aumentoDiario * 14)*(32 - diaChegada);

    return 0;
}
