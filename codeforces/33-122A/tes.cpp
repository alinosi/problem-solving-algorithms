#include <bits/stdc++.h>

using namespace std;

bool mod(int number) {
    if (number % 4 == 0 || number % 7 == 0 || number % 44 ==0 || number % 47 ==0 || number % 74 ==0 ||
        number % 77 ==0 || number % 444 ==0 || number % 447 ==0 || number % 474 ==0 ||
        number % 477 ==0 ) {
        return true;
    }
    return false;
}

void detector(int number) {
    bool lucky;
    string strnumber = to_string(number);

     for (char s : strnumber ) {
        if (s != '4' &&  s!= '7') {
            if (mod(number)) {
                lucky = true;
                break;
            } else {
                lucky = false;
                break;
            }
        } else {
            lucky = true;
        }
     }

    if (lucky) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}

int main () {

    int number;

    cin >> number;

    detector(number);

    return 0;
}