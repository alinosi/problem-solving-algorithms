#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, fix = 0;
    cin >> n;

    while (n--) {
        int temp = 0, x;
        for (int i = 0; i < 3; i++) {
            cin >> x;
            temp += x;
        }
        if (temp > 1) fix++;
    }

    cout << fix << '\n';
    return 0;
}
