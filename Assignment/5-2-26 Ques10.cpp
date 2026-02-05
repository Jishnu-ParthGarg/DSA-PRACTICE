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
    cout << endl << "Column-wise sum:" << endl;
    for (int j = 0; j < 3;j++)
    {
        int colSum = 0;

        for (int i = 0; i < 3; i++)
        {
            colSum = colSum + matA[i][j];
        }

        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}
