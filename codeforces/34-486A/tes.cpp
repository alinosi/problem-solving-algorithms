#include <bits/stdc++.h>

using namespace std;

long long formulaF(long long number) {
    long long result;

    if (number == 1) {
        return -1;
    } else if (number == 0) {
        return number;
    }

    // substract (n(+), n(-))
    if (number % 2 == 0) { // even
        long long idxE = number/2;
        long long idxO =  idxE;
        result = ((idxE * (2*2 + (idxE - 1) * 2))/2) + ((idxO * (2*(-1) + (idxO - 1) * (-2)))/2);
    } else { // odd
        long long idxE = (number - 1) / 2; // number of even numbers
        long long idxO =  idxE + 1; // number of odd numbers
        result = ((idxE * (2*2 + (idxE - 1) * 2))/2) + ((idxO * (2*(-1) + (idxO - 1) * (-2)))/2);
    }

    return result;
}

int main () {

    long long number;

    cin >> number;

    cout << formulaF(number);

    return  0;
}