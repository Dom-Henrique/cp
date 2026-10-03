#include <bits/stdc++.h>
using namespace std;
/*
competidor com pontuacao maior que o k-nesimo colocado
pontuacao deve ser positiva

*/
int main()
{
    int k, n;
    cin >> k >> n;
    int cont = 0;
    vector<int> playerScore(k);
    int colocado;
    for (int i = 0; i < k; i++)
    {
        // n eh a pontuacao minima. tem que comparar
        cin >> playerScore[i];
        if (i == n-1)
            colocado = playerScore[i];
    }
    for (int j = 0; j < k; j++)
    {
        if (playerScore[j] >= colocado && playerScore[j] != 0)
            cont += 1;
    }
    cout << cont << endl;
}