#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    vector<vector<int>> format;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());

    format.push_back({numbers[0]});
    int x = 0;

    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] - 1 == numbers[i - 1]) {
            format[x].push_back(numbers[i]);
        } else {
            format.push_back({numbers[i]});
            x++;
        }
    }

    for (int i = 0; i < format.size(); i++) {
        if (format[i].size() == 1) {
            cout << format[i][0];
        } else {
            cout << format[i].front() << "-" << format[i].back();
        }
        if (i != format.size() - 1) cout << ",";
    }
    cout << "\n";

    return 0;
}
