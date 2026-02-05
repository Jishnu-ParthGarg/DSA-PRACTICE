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
    cout << endl
         << "Row-wise sum:" << endl;
    for (int i = 0; i < 3; i++)
    {
        int rowSum = 0;

        for (int j = 0; j < 3; j++)
        {
            rowSum = rowSum + matA[i][j];
        }

        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

    return 0;
}
