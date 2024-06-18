#include<bits/stdc++.h>
using namespace std;

int main(){

    const int ANO_ATUAL = 2024;
    int anoNascimento;
    cin >> anoNascimento;

    cout << ANO_ATUAL - ((ANO_ATUAL - anoNascimento)*2) << endl;
    return 0;
}
