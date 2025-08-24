#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, map<char,string>> table1 = {
        {'A', {{'A',"AB"}, {'B',"DC"}, {'C',"CC"}, {'D',"CB"}}},
        {'B', {{'A',"CA"}, {'B',"DA"}, {'C',"CD"}, {'D',"DD"}}},
        {'C', {{'A',"BC"}, {'B',"AA"}, {'C',"BA"}, {'D',"DB"}}},
        {'D', {{'A',"BD"}, {'B',"AD"}, {'C',"BB"}, {'D',"AC"}}}
    };

    map<char, map<char,string>> table2 = {
        {'A', {{'A',"CD"}, {'B',"BB"}, {'C',"AC"}, {'D',"CC"}}},
        {'B', {{'A',"CB"}, {'B',"DB"}, {'C',"AD"}, {'D',"DD"}}},
        {'C', {{'A',"DA"}, {'B',"DC"}, {'C',"BC"}, {'D',"BD"}}},
        {'D', {{'A',"AA"}, {'B',"BA"}, {'C',"CA"}, {'D',"AB"}}}
    };

    string pesan;
    cin >> pesan;
    
    string hasil = "";
    for (int i = 0; i < pesan.size(); i += 2) {
        string blok = pesan.substr(i, 2);

        string tahap1 = table1[blok[0]][blok[1]];

        string tahap2 = table2[tahap1[0]][tahap1[1]];

        hasil += tahap2;
    }

    cout << hasil << "\n";
    return 0;
}
