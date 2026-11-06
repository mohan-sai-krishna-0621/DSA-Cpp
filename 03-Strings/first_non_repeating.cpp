#include <iostream>
using namespace std;

int main() {
    string str = "aabbcde";

    int freq[256] = {0};

    for (char ch : str) {
        freq[(unsigned char)ch]++;
    }

    bool found = false;

    for (char ch : str) {
        if (freq[(unsigned char)ch] == 1) {
            cout << "First non-repeating character: " << ch;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No non-repeating character found";
    }

    return 0;
}
