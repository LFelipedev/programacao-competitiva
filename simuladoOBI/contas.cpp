#include<iostream>
#include<list>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dinheiroDisponivel, contaAcougue, contaFarmacia, contaPadaria, contador;
    list<int> valorContas;

    cin >> dinheiroDisponivel >> contaAcougue >> contaFarmacia >> contaPadaria;

    valorContas.push_front(contaAcougue);
    valorContas.push_front(contaFarmacia);
    valorContas.push_front(contaPadaria);

    valorContas.sort();

    contador = 0;

    if (dinheiroDisponivel >= (contaAcougue + contaFarmacia +contaPadaria)) cout << "3" << endl;
    else{

        while(dinheiroDisponivel <= (valorContas.back() + valorContas.front())){

            valorContas.pop_front();
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
