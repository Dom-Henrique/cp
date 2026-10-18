#include <bits/stdc++.h>
using namespace std;

string resolution(string xena)
{
    sort(xena.begin(), xena.end(), [](char a)
         { return a != '+'; });
    return xena;
}
int main()
{
    // ordenar a string para que todos os numeros fiquem ordenados
    string xena;
    cin >> xena;
    cout << resolution(xena) << endl;
}