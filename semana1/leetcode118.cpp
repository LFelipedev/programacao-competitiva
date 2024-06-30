#include <iostream>
using namespace std;

int main() {
    int numRows;
    cin >> numRows;

    for (int i = 0; i < numRows; ++i) {
        int numero = 1;
        cout << "[";
        for (int j = 0; j <= i; ++j) {
            cout << numero;
            if (j < i) cout << ",";
            numero = numero * (i - j) / (j + 1);
        }
        cout << "]";
        if (i < numRows - 1) cout << ",";
    }

    return 0;
}
