#include <bits/stdc++.h>

using namespace std;

int main () {

    
    int numberOfmagnet;
    int groups = 1;
    string structure = "";

    cin >> numberOfmagnet;

    vector<string> numbers(numberOfmagnet);

    for (int i = 0; i< numberOfmagnet; ++i) {
        cin >> numbers[i];
        structure += numbers[i];
    }

    for (int i = 0; i < structure.size() -1; ++i) {
        if (structure[i] == structure[i+1]) {
            groups++;
        }    
    }

    cout << groups;

    return 0;
}