// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

    int stones;
    int counter = 0;
    string color;
    
    cin>>stones;
    cin>>color;
    
    for (int i = 0; i < stones; i++ ) {
        for (int j = i+1; j < stones; j++) {
            if (color[i] == color[j]) {
                color.erase(j, 1);
                counter++;
                stones--;
                j--;
            } else {
                break;
            }
        }
    }
    
    cout<<counter;
    

    return 0;
}