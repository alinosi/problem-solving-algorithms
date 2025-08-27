// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int games;
    cin >> games;
    
    vector<pair<int, string>> loop(games);    
    vector<string> winners(games);
    int turn = 1;
    
    // input string
    for (auto& l : loop) {
        cin >> l.first >> l.second;
    }
    
    // start game
    for (auto& l : loop) {
        int thereisnotA = 0;
        // check the text first
        for (char& s : l.second) {
            if (s != 'A') {
                thereisnotA++;
            }
        }
        // determine the winners if there's the end
        if (thereisnotA == 0) {
            if (turn % 2 == 0) {
                winners.push_back("Arka");
            } else {
                winners.push_back("Vidia");
            }
        } else {
            // start decrement the char
            for (char& s : l.second) {
                if (s != 'A') {
                    --s;
                }
            }
            turn ++;
        }

    }
    
    // loop to determine the winner every games
    for (string g : winners) {
        cout << g << "\n";
    }
    
    return 0;
}