// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    
    // read string yang diinput
    string letters;
    cin>>letters;
    
    // assign element pertama dalam string ke variable lain
    char b = toupper(letters[0]);
    
    // ubah huruf tsb menjadi uppercase dan simpan ke variab
    letters[0] = b;
    
    cout<<letters;

    return 0;
}