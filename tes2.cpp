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
    cin>>n;     
    string a[n];
    
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    
    for (int j=0;j<n;j++){
        if (a[j].length() <= 10 ){
            cout<<a[j]<<"\n";
        }
        else {
            char first = a[j][0];
            int second = a[j].length() - 2;
            string secon = to_string(second);
            char third  = a[j][a[j].length() - 1];
            cout<<first + secon + third<<"\n";
        }
        
    }

    return 0;
}