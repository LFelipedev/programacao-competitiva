#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int comprimentos[4];
    for (int i = 0; i < 4; ++i) {
        cin >> comprimentos[i];
    }

    sort(comprimentos, comprimentos + 4);

    bool Triangulo = false;


    for (int i = 0; i < 2; ++i) {
        if (comprimentos[i] + comprimentos[i + 1] > comprimentos[i + 2]) {
            Triangulo = true;
            break;
        }
    }

    if (Triangulo) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
