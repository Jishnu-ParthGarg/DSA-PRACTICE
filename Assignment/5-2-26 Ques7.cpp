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
    int maxx = a[0];
    for (int i = 0; i < n; i++)
    {
        if (maxx < a[i])
        {
            maxx = a[i];
        }
    }
    cout << "Maximum elements of array: " << maxx;
    return 0;
}
