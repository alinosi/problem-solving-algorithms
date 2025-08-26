// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void petya(string str) {
    string tlwer = "";
    for (char s : str ) {
        tlwer+= tolower(s);
    } // tolower
    for (int i = 0; i < tlwer.size(); i++) {
        if ( tlwer[i] == 'a' || tlwer[i] == 'u' || tlwer[i] == 'i' || tlwer[i] == 'o' || tlwer[i] == 'y' || tlwer[i] == 'e' ) {
            tlwer.erase( i, 1);
            --i;
        }
    }
    
    for (char s : tlwer) {
        cout << "." << s;
    }
}

int main() {
    string str;
    
    cin >> str;
    
    petya(str);
    
    return 0;
    
}