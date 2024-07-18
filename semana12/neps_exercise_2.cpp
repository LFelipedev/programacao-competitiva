//Medalhas
#include <bits/stdc++.h>
using namespace std;

int main() {

    int T1, T2, T3, arr[3];
    cin >> T1 >> T2 >> T3;
    arr[0] = T1;
    arr[1] = T2;
    arr[2] = T3;

    int size_arr = (sizeof(arr)/sizeof(arr[0]));
    sort(arr, arr + size_arr);

    for (int i = 0; i < size_arr; i++) {
        if(arr[i] == T1) cout << "1\n";
        if(arr[i] == T2) cout << "2\n";
        if(arr[i] == T3) cout << "3\n";
    }

    return 0;
}
