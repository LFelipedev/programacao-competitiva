#include <iostream>

using namespace std;

int vitorias_cormego, empates_cormego, saldo_cormego, vitorias_flaminthians, empates_flaminthians, saldo_flaminthians;

int total_cormego, total_flaminthians;

int main(){

    cin >> vitorias_cormego >> empates_cormego >> saldo_cormego >> vitorias_flaminthians >> empates_flaminthians >> saldo_flaminthians;

    total_cormego = (vitorias_cormego*3) + empates_cormego;
    total_flaminthians = (vitorias_flaminthians*3) + empates_flaminthians;

    if(total_cormego > total_flaminthians){

        cout << "C" << endl;
    } if(total_cormego < total_flaminthians){

        cout << "F" << endl;
    } if(total_cormego == total_flaminthians){

        if(saldo_cormego > saldo_flaminthians){

            cout << "C" << endl;
        } else if (saldo_cormego < saldo_flaminthians){

            cout << "F" << endl;
        } else {

            cout << "=" << endl;
        }
    }



    return 0;
}
