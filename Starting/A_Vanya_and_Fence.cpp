#include <bits/stdc++.h>
using namespace std;
/*
cerca de altura h; n amigos
largura em pe: 1;
largura agachado: 2;
se exceder, precisa dividir por dois
*/

int minWidth(vector<int> arr, int maxHeigth)
{
    int cont = 0;
    for (int i : arr)
    {
        if (i <= maxHeigth)
            cont++;
        else if (i > maxHeigth)
            cont += 2;
    }
    return cont;
}

int main()
{
    int n, h;
    cin >> n >> h;
    vector<int> friends (n);
    for (int i = 0; i < n; i++)
    {
        cin >> friends[i];
    }
    cout << minWidth(friends, h);
}