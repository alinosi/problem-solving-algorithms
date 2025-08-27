// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

void isdangerous(string player) {
    int counter0 = 0;
    int counter1 = 0;
    
    for (int i = 0; i < player.size(); ++i) {
        if (player[i] == '0') {
            counter0++;
            counter1 = 0;
        } else{
            counter1++;
            counter0 = 0;
        }
        if (counter0 == 7 || counter1 == 7) {
            break;
        }
    }
    
    if (counter0 >= 7 || counter1 >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
 
int main() {

    string player;
    cin >> player;
    
    isdangerous(player);

    return 0;
}