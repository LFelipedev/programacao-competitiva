//Fibonacci Number

#include <bits/stdc++.h>
using namespace std;

int main() {

    int fibonnacciNumber;
    cin >> fibonnacciNumber;

    if(fibonnacciNumber == 0) cout << 0 << endl;
    else if(fibonnacciNumber == 1) cout << 1 << endl;
    else cout << (fibonnacciNumber-1)+(fibonnacciNumber-2) << endl;

    return 0;
}
