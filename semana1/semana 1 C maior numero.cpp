#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> numeros;
    int entrada;

    do{

        cin >> entrada;
        numeros.push_front(entrada);
    }while(numeros.front() != 0);

    numeros.sort();
    cout << numeros.back() << endl;

    return 0;
}
