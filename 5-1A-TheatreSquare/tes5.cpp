#include <iostream>
#include <cmath>
using namespace std;

// theater square
int main()
{
    long long n,m,a;
    long long h1,h2,h3;
    cin >> n >> m >> a; cout << endl;
    h1=ceil((double)n/a);
    h2=ceil((double)m/a);
    h3=h1*h2;
    cout << h3;
    
    return 0;
}