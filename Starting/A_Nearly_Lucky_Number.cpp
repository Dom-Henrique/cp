#include <bits/stdc++.h>
using namespace std;

/*
numero da sorte SO POSSUI 4 E/OU 7
*/
// string isLucky(int n)
// {
//     // if (n == 7 || n == 4)
//     //     return "YES";
//     string s = to_string(n);
//     for (char c : s)
//     {
//         if (c != '4' && c != '7')
//             return "NO";
//     }
//     return "YES";
// }
bool isLucky(int n)
{
    string s = to_string(n);
    for (char c : s)
    {
        if (c != '4' && c != '7')
            return false;
    }
    return true;
}
int main()
{
    // int n;
    string n;
    cin >> n;
    // adicionar um contador de caracteres
    int cont = 0;
    for (char c : n)
    {
        if (c == '4' || c == '7')
            cont++;
    }
    cout << (isLucky(cont) ? "YES" : "NO");
}