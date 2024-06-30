#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> pontos;

    int a, b, c;

    cin >> a >> b >> c;

    pontos.push_front(a);
    pontos.push_front(b);
    pontos.push_front(c);

    pontos.sort();
    pontos.pop_front();

    cout << pontos.front() << endl;

    return 0;
}
