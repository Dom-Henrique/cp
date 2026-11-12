#include <bits/stdc++.h>
using namespace std;

/*
pegar uma string e imprimir so as consoantes com pontos alternando
muleta => .m.l.t
*/
void resolve(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (char c : s)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c!= 'y')
            cout << "." << c;
    }
}
int main()
{
    string s;
    cin >> s;
    resolve(s);
}