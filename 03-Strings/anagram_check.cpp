#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1 = "listen";
    string str2 = "silent";

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2) {
        cout << "Strings are Anagrams";
    }
    else {
        cout << "Strings are not Anagrams";
    }

    return 0;
}
