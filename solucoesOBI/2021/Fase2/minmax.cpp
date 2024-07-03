//Mínimo e máximo

#include <bits/stdc++.h>
using namespace std;

int somaCaractere(int numeroInt) {

    string intToString = to_string(numeroInt);
    int resultadoSoma = 0;

    for(char numeroChar : intToString) {

        int somatorio = numeroChar - '0';
        resultadoSoma += somatorio;
    }

    return resultadoSoma;
}

int main() {

    int numS, numA, numB, numMenor, numMaior;
    cin >> numS >> numA >> numB;

    numMenor = -1;
    numMaior = -1;

    for(int i=numA; i<=numB; i++) {
        if(somaCaractere(i) == numS) {
            if(numMenor == -1) numMenor = i;
            numMaior = i;
        }
    }

    cout << numMenor << endl;
    cout << numMaior << endl;

    return 0;
}
