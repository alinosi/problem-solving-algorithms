#include <iostream>
using namespace std;

bool isValidKigivaga(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' && s.substr(i, 3) != "aga") return false;
        if (s[i] == 'i' && s.substr(i, 3) != "igi") return false;
        if (s[i] == 'u' && s.substr(i, 3) != "ugu") return false;
        if (s[i] == 'e' && s.substr(i, 3) != "ege") return false;
        if (s[i] == 'o' && s.substr(i, 3) != "ogo") return false;
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e' || s[i] == 'o') i += 2;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        cout << (isValidKigivaga(s) ? "Begenagar" : "Sagalagah") << endl;
    }
}
