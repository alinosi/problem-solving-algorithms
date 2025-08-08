#include <iostream>
using namespace std;
 
int main()
{
    string username;
    
    cin>>username;
    
    for (int i = 0; i < username.size(); i++) {
        for (int j = i + 1; j< username.size(); j++) {
            if (username[i] == username[j])  {
                username.erase(j, 1);
                j--;
            }
        }
    }
    
    if (username.size() % 2 == 0) { //  this is the main factor for the output
        cout << "CHAT WITH HER!";
    } else {
        cout<<"IGNORE HIM!";
    }
    
 
    return 0;
}