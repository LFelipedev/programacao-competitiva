#include <iostream>
#include <list>
#include <unordered_set>

using namespace std;

int contarPresenca(list<int>& listaRegistros){

    unordered_set<int> registrosUnicos;

    for (int registro : listaRegistros) {
        registrosUnicos.insert(registro);
    }

    return registrosUnicos.size();
}

int main(){

    int quantidadeRegistro;
    int numeroChamada;

    list<int> verificaRegistro;

    cin >> quantidadeRegistro;

    for(int i; i < quantidadeRegistro; i++){

        cin >> numeroChamada;
        verificaRegistro.push_front(numeroChamada);
    }

    cout << contarPresenca(verificaRegistro) << endl;



    return 0;
}
