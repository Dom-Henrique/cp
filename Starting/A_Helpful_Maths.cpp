#include <bits/stdc++.h>
using namespace std;

void resolution(string xena)
{
    // sort(xena.begin(), xena.end(), [](char a)
    //      { return a != '+'; });
    // return xena;
    string digit = "";
    for (char c : xena)
    {
        if (isdigit(c))
        {
            digit += c;
        }
    }
    sort(digit.begin(), digit.end());
    for (int i = 0; i < digit.length(); i++)
    {
        cout << digit[i];
        if (i != digit.length() - 1)
            cout << "+";
    }
}
int main()
{
    // ordenar a string para que todos os numeros fiquem ordenados
    string xena;
    cin >> xena;
    resolution(xena);
}