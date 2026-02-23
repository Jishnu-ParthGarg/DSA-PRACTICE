#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        default: cout << "Invalid choice";
    }
    return 0;
}
