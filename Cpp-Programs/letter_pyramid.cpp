#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string, no spaces: ";
    cin >> input;
    for (int i = input.length(), j = 0; i >= 0; i--, j++) {
        for (int k = i; k >= 0; k--)
            cout << " ";
        cout << input.substr(0, j);
        for(int k = j - 2; k >= 0; k--)
            cout << input.at(k);
        cout << endl;

    }
    return 0;
}
