#include <bits/stdc++.h>
using namespace std;
/*
preciso deixar toda a palavra em uppercase ou lowercase
isso varia de acordo com o peso das letras.
*/
string resolution(string s)
{
    int lower = 0, upper = 0;
    for (char c : s) int(c) < 96 ? upper++ : lower++;
    if (lower < upper) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
int main()
{
    string s;
    cin >> s;
    cout << resolution(s);
}