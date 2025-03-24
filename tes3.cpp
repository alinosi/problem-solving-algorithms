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
    int a[n];
    int fix = 0;
    int temp = 0;
    
    for (int i=0; i<n;i++){
        for (int j=0; j<3;j++) {
            cin>>a[j];
            if (a[j] <= 1 && a[j] >= 0) {
                temp += a[j];
            }
        }
        if (temp > 1){
            fix++;
        }
        temp = 0;
    }
    
    cout<<fix;
    

    return 0;
}