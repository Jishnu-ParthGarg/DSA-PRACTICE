#include <iostream>
using namespace std;
int main()
{ 
    int N = 5;
    for (int i = 0; i < N; i++)
    {
        for (int j = N; j > i; j--)
        {
            cout << N - j + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
