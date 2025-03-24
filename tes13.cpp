/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int charcase(string a, string b){

    for (int i = 0; i<a.length(); i++ ) {
        char A = tolower(a[i]);
        char B = tolower(b[i]);
        
        if (A > B ) {
            return 1;
        }
        else if (A < B) {
            return -1;    
        }
    }
    
    return 0;
}

int main()
{
    string a,b;
    
    cin>>a>>b;

    cout<<charcase(a,b);
    
    return 0;
}