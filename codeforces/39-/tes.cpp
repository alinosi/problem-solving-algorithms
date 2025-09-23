#include <bits/stdc++.h>

using namespace std;

int main() {
        
        vector<int> hourseshoes(4);
        
        for (int i = 0; i<4; i++) {
            cin >> hourseshoes[i];
        }
        
        sort(hourseshoes.begin(), hourseshoes.end()); 

        auto last = unique(hourseshoes.begin(), hourseshoes.end());
        hourseshoes.erase(last, hourseshoes.end());
        
        if  (hourseshoes.size() - 4 != 0) {
            cout << 4 - hourseshoes.size(); 
        } else {
            cout << 0;
        }
    
    return 0;
}