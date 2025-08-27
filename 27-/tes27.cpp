// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    int temp = 0;
    int equi = 0;
    int isequi = 0;
    vector<vector<int>> body(n, vector<int>(3));

    // input data
    for (auto& b : body) {
        for (auto& k : b) {
            cin >> k;
        }
    }
    
    // sum the data == problem
    for (int i = 0; i < 3; i++) {
        int equi = 0;
        for (int j = 0; j < n; j++){
            equi += body[j][i];
        }
        if (equi != 0 ){
            isequi++;
        }
    }
    
    if (isequi == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}