#include <bits/stdc++.h>

using namespace std;

void formulaF(int number) {
    int result;

    if (number % 2 == 0) {
        int idxE = number/2;
        int idxO =  idxE;
        result = (idxE/2 * ((2*2 + (idxE - 1) * 2))) - (idxO/2*((2*(-1) + (idxO - 1) - 1) * (-2)));

    } else {
        int idxE = number / 2;
        int idxO =  idxE + 1;
        result = (idxE/2 * ((2*2 + (idxE - 1) * 2))) - (idxO/2*((2*(-1) + (idxO - 1) - 1) * (-2)));
    }

    cout << result;

}

int main () {

    int number;

    cin >> number;

    formulaF(number);

    return  0;
}