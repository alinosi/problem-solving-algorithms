/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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