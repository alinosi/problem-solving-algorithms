#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        int len = s.length(); // Simpan panjang agar tidak dipanggil berulang
        if (len <= 10) {
            cout << s << "\n";
        } else {
            cout << s[0] << (len - 2) << s[len - 1] << "\n";
        }
    }

    return 0;
}
