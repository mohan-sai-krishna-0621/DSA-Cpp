#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare both strings
    if (str1 == str2) {
        cout << "Strings are Anagrams";
    }
    else {
        cout << "Strings are Not Anagrams";
    }

    return 0;
}
