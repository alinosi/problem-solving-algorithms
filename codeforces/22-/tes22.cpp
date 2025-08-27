#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n, h;
    int sum = 0;
    
    cin >> n >> h;
    
    vector<int> persons(n);
    
    for (int& person : persons) {
        cin >> person;
    }
    
    for (int person : persons) {
        if ( person > h) {
            sum += 2;
        } else {
            sum++;
        }
    }
    
    cout << sum;
    
    return 0;
}