#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int s = 0;
    vector<vector<int>> matA(3, vector<int>(3));
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matA[i][j];
        }
    }
    cout << "Sum of diagonal elements:";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i = j)
            {
                s = s + matA[i][j];
            }
        }
        cout << endl;
    }
    cout << s;
    return 0;
}