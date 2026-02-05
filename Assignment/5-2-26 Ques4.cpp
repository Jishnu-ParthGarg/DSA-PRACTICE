#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matA(3, vector<int>(3));
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matA[i][j];
        }
    }
    cout << "Matrix is:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}