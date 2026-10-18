#include <bits/stdc++.h>
using namespace std;
const int BEAUTIFUL_MATRIX = 5;
/*
matriz 5x5 com 24 zeros
matriz bonita eh a que o 1 ta no meio
retornar o numero de movimentos necessarios
meio: M[2][2]
*/
int beautifulMatrix(vector<int, int> arr)
{
    int count = 0;
    auto I = find(arr.begin(), arr.end(), 1);
    int index = (int) I - arr.begin();
    for (int i = 0; i < BEAUTIFUL_MATRIX; i++)
    {
        for (int j = 0; j < BEAUTIFUL_MATRIX; j++)
        {
            if (arr[i][j] == 1)
                return count;
            if (i>2 || j>2){
                int backup = arr[i][j];
            }
        }
    }
}
int main()
{
    vector<int, int> matrix;
    for (int i = 0; i < BEAUTIFUL_MATRIX; i++)
    {
        for (int j = 0; j < BEAUTIFUL_MATRIX; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << beautifulMatrix(matrix);
}