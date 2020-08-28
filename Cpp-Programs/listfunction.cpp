#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec {};
    char ch;
    int largest, smallest, sum = 0;
    cout << "Welcome to the list operator program\n\n";
    for (;;) {
        cout << "P - Print numbers\nA - Add a number\nM - Display average of numbers\n";
        cout << "S - Display smallest number\nL - display largest number\nQ - Quit \n\nEnter your choice: ";
        cin >> ch;
        switch (ch) {
            case 'p': case 'P':
                if (vec.size() == 0)
                    cout << "The list is empty...\n\n";
                else {
                    cout << "The list's contents: ";
                    for (int i = 0; i < (signed) vec.size(); i++)
                     cout << vec.at(i) << ' ';
                   }
                cout << endl;
                break;
            case 'a': case 'A':
                int num;
                cout << "Enter number to be added: ";
                cin >> num;
                vec.push_back(num);
                break;
            case 'm': case 'M':
                if (vec.size() == 0)
                    cout << "The list is empty...\n\n";
                else {
                    for (auto num: vec)
                        sum += num;
                    cout << "The average of the numbers is " << (float) sum / vec.size() << "\n\n";
                }
                break;
            case 's': case 'S':
                if (vec.size() == 0) {
                    cout << "The list is empty...\n\n";
                    break;
                }
                smallest = vec.at(0);
                for (auto num: vec)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number in the list is " << smallest << "\n\n";
                break;
            case 'l': case 'L':
                if (vec.size() == 0) {
                    cout << "The list is empty...\n\n";
                    break;
                  }
                largest = vec.at(0);
                for (auto num: vec)
                    if (num > largest)
                        largest = num;
                cout << "The largest number in the list is" << largest << "\n\n";
                break;
            case 'q': case 'Q':
                return 0;
            default:
                cout << "Not a valid input...\n\n";
        }
    }
    return 0;
}
