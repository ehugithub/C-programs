#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> vec {1, 2, 3};
    int result = 0;
    for (int i = 0; i <= vec.size() - 1; i++) {
        for (int j = i + 1; j <= vec.size() - 1; j++) {
            if (i == j)
                continue;
            result += vec.at(i) * vec.at(j);
        }
    }
    cout << result;
    return 0;
}