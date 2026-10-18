#include <bits/stdc++.h>
using namespace std;
/*
quantos anos vai ser preciso para a>b
a<=b
*/
int yearsCount(int a, int b)
{
    int cont = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cont += 1;
    }
    return cont;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << yearsCount(a, b);
}