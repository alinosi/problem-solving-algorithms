#include <iostream>
using namespace std;


bool isTrue(int N, int K){
    int i;
    int y = 1;
    if (N==K) {
        return true;   
       }
    else {
        for (i=1; i<=N; i++){
            if (y > K) {
                y--;
            } 
            else if (y < K) {
                y++;
            }
            else if (i == N && y == K) {
                return true;
            }
            else if (y == K) {
                y--;
            }
            else {
                return false;
            }
            
        }
    }
   return false;
}

int main()
{
    int N, K;
    cin>>N>>K;
    
    if (N >= 2) {
    cout << (isTrue(N,K) ? "YES" : "NO");
    }

    return 0;
}