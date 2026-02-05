#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    string year;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your year of study: ";
    getline(cin, year);
    cout << "My name is " << name << " and I am currently a " << year << " year student.";
    return 0;
}
