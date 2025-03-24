#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int i,j;
    int output = 0;
    
    for ( i=0; i<5; i++){
        for ( j=0; j<5; j++) {
            cin>>a[i][j];
        }
    }
    
     for (i=0; i<5; i++){
        for (j=0; j<5; j++) {
            if (a[i][j] == 1) {
                if (i>=2 && j >=2){
                    output = (i - 2) + (j - 2);
                } 
                else if(i>=2 && j<=2) {
                    output = (i - 2) + (2 - j);
                } 
                else if(i<=2 && j>=2) {
                    output = (2 - i) + (j - 2);
                }
                else if(i<=2 && j<=2) {
                    output = (2 - i) + (2 - j);
                }
                else {
                    output = 0;
                }
            }
        }
    }
    
    cout<<output;
    
    return 0;
}





