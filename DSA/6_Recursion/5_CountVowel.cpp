#include <iostream>
using namespace std;

int countvowel(string s, int index) {
    // Base case
    if (index == s.size()) {
        return 0;
    }


    char ch = tolower(s[index]); // lowercase me convert kar lo

    // Check if current char is vowel
    int isVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');

    // Recursive call for next index
    return isVowel + countvowel(s, index + 1);
}

int main() {
    string str ;
    cout<<"Enter : " ;
    cin>>str;
    cout << "Vowel count: " << countvowel(str, 0);
    return 0;
}
