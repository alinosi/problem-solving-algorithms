#include <iostream>
using namespace std;

int main()
{
    int n;
    int x = 0;
    string input;
    
    cin>>n;
    
    while (n--) { 
        cin>>input;
        if (input == "++x" || input == "x++" || input == "++X" || input == "X++") {
            x++;
        } else if (input == "--x" || input == "x--" || input == "--X" || input == "X--") {
            x--;
        }
    }
    
    cout<<x;

    return 0;
}