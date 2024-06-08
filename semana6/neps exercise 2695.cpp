#include <iostream>

using namespace std;

int main(){

    int esporteRealizado, arteRealizado, cienciaRealizado;

    cin >> esporteRealizado >> arteRealizado >> cienciaRealizado;

    int pontos = (esporteRealizado*2)+(arteRealizado*3)+(cienciaRealizado*5);

    cout << pontos << endl;

    if(pontos >= 200) cout << "O" << endl;
    else if(pontos >= 150) cout << "S" << endl;
    else if(pontos >= 100) cout << "B" << endl;
    else cout << "N" << endl;

    return 0;
}
