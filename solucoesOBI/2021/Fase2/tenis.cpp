//Duplas de tênis

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nivelJogador(4);
    int time1, time2;

    for(int i=0; i<4; i++){

        cin >> nivelJogador[i];
    }

    sort(nivelJogador.begin(), nivelJogador.end());

    time1 = nivelJogador.at(nivelJogador.size()/2) + nivelJogador.at((nivelJogador.size()/2)-1);
    time2 = nivelJogador.back() + nivelJogador.front();

    if((time1 - time2) < 0) cout << time2 - time1 << endl;
    else cout << time1 - time2 << endl;


    return 0;
}
