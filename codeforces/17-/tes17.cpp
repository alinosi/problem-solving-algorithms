// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {   
   string letters;
   int lowercase = 0;
   int uppercase = 0;
   
   cin >> letters;
   
   for (int i = 0; i < letters.size(); i++) {
       if (letters[i] == tolower(letters[i])){
           lowercase++;
       } else {
           uppercase++;
       }
   }
   
   if (lowercase >= uppercase) {
       for (int i = 0; i<letters.size(); i++) {
           letters[i] = tolower(letters[i]);
       }
   } else {
        for (int i = 0; i<letters.size(); i++) {
           letters[i] = toupper(letters[i]);
       }
   }
   
   cout<<letters;
   
    return 0;
}