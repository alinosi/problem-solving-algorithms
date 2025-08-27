#include <bits/stdc++.h>
using namespace std;

pair<char,char> inverseLookup(map<char, map<char,string>> &table, string value) {
    for (auto &row : table) {
        for (auto &col : row.second) {
            if (col.second == value) {
                return {row.first, col.first};
            }
        }
    }
    return {'?', '?'}; 
}

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

    string encoded;
    cin >> encoded;

    string decoded = "";
    for (int i = 0; i < encoded.size(); i += 2) {
        string blok = encoded.substr(i, 2);

        auto tahap1 = inverseLookup(table2, blok);
        string tahap1Str = string(1, tahap1.first) + string(1, tahap1.second);
        auto original = inverseLookup(table1, tahap1Str);

        decoded += original.first;
        decoded += original.second;
    }

    cout << decoded << "\n";
    return 0;
}
