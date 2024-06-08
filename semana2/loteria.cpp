#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> numeros;
    list<int> sorteio;
    int resultado=0;

    for(int i=0; i < 6; i++){

        int n;
        cin >> n;
        numeros.push_front(n);
    }

    for(int j=0; j < 6; j++){

        int n;
        cin >> n;
        sorteio.push_front(n);
    }

    numeros.merge(sorteio);

    numeros.sort();

    int prova[12];

    for(int k=0; k < 12; k++){

        prova[k] = numeros.front();
        numeros.pop_front();
    }

    for(int l=0; l < 12; l++){
        if(prova[l] == prova[l+1]){

            resultado++;
        }
    }

    switch(resultado){

    case 3:
        cout << "terno" << endl;
        break;

    case 4:
        cout << "quadra" << endl;
        break;

    case 5:
        cout << "quina" << endl;
        break;

    case 6:
        cout << "sena" << endl;
        break;

    default:
        cout << "azar" << endl;
        break;
    }
    return 0;
}
