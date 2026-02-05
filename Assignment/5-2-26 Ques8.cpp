#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            c = c + 1;
        }
    }
    cout << "Number of even elements in array: " << c;
    return 0;
}
