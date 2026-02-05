#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl
         << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl
         << "Squared Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] * a[i] << " ";
    }
    return 0;
}
