#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> tacosDisponiveis;
    int numeroBuscas, tamanhoTaco, contador = 0;

    cin >> numeroBuscas;

    for(int i = 0; i < numeroBuscas; i++){

        cin >> tamanhoTaco;
        if(tacosDisponiveis.find(tamanhoTaco) == tacosDisponiveis.end()){

            contador += 2;
            tacosDisponiveis.insert(tamanhoTaco);
        }

        else tacosDisponiveis.erase(tamanhoTaco);
    }

    cout << contador << endl;
    return 0;
}
