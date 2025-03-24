#include <iostream>
using namespace std;

int main()
{
    int n = 0; // jumlah partisipan
    int m = 0;
    int kelulusan = 0;

    cin>>n>>m;

    int a[n];
    
    if (m>=1) {
        for (int i= 0; i<n; i++) {
            cin>>a[i];
        }
        
        for (int j = 0; j<n; j++) {
                if (a[j] >= a[m - 1] && a[j] > 0) {
                    kelulusan++;
                }
            } 
        }
    
    cout<<kelulusan;
    
    return 0;
}