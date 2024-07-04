#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> numeros;
    int contador=0;

    do {
        
        int entrada;
        cin >> entrada;
        numeros.push_front(entrada);
    } while(numeros != '\0');

    for(int i=0; i<sizeof(numeros); i++){

        if(numeros.back()%3 != 0){

            contador++;
            numeros.pop_back();
        }
        else numeros.pop_back();
    }
    return 0;
}
