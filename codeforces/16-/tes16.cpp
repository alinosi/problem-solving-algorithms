// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int bananasPrice;
    int soldierMoney;
    int qty;
    int totalPrice = 0;
    int borrow = 0;
    
    cin>>bananasPrice>>soldierMoney>>qty;
    
    
    for (int i = 1; i <= qty; i++ ) {
        totalPrice += bananasPrice * i;    
    }
    
    borrow = totalPrice - soldierMoney; 
    
    if (borrow <=0) {
        borrow = 0;
    }
    
    cout << borrow;
    
    
    return 0;
}