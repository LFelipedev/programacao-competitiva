#include <iostream>

using namespace std;

int main(){

    int a, b, c;
    int alturaPorta, larguraPorta;

    cin >> a >> b >> c;
    cin >> alturaPorta >> larguraPorta;

    if(b <= alturaPorta &&  < larguraPorta){

        cout << "S" << endl;
    } else {

        cout << "N" << endl;
    }

    return 0;
}
