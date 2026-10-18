#include <bits/stdc++.h>
using namespace std;
/*
1 passo pode ir ate 5 coordenadas
dividir e somar o resto
*/
int main()
{
    int x;
    cin >> x;
    int steps = x / 5;
    if (abs(x - (steps * 5)) < 5 && x % 5 != 0)
        steps += 1;
    cout << steps << endl;
}