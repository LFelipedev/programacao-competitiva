#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> corBola;

    int n;
    cin >> n;

    int somatorio;

    int base[n];

    for(int i=0; i < n; i++){

        //cin >> base[i];
        //somatorio = 5 + (n-1)*(-1);
    }
    somatorio = n * (n-2);
    cout << somatorio;

    for(int j=0; j < n; j++){

        if(base[j] == base[j+1]) corBola.push(1);
        else if(base[j] != base[j+1]) corBola.push(-1);
    }
    return 0;
}
