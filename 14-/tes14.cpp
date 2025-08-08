// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    int stones;
    int counter = 0;
    string color;
    
    cin>>stones;
    cin>>color;
    
    for (int i = 0; i<stones; i++ ) {
        if (stones - 1 == i) {
            break;
        }
        if (color[i] == color[i+1]) {
            color.erase(i, 1);
            counter++;
            if (i >= 0) {
                i--;
            }
        }
    }
    
    cout<<counter;
    

    return 0;
}