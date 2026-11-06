#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "madam";
    string reversed = str;

    reverse(reversed.begin(), reversed.end());

    if (str == reversed) {
        cout << "Palindrome";
    }
    else {
        cout << "Not a Palindrome";
    }

    return 0;
}
