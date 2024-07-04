#include<iostream>
using namespace std;

int main(){
    int paesVendidos, docesVendidos, bolosVendidos;
    cin >> paesVendidos >> docesVendidos >> bolosVendidos;

    int totalPontos = paesVendidos + (docesVendidos*2) + (bolosVendidos*3);

    if (totalPontos >= 150) cout << "B" << endl;
    else if (totalPontos >= 120) cout << "D" << endl;
    else if (totalPontos >= 100) cout << "P" << endl;
    else cout << "N" << endl;

    return 0;
}
