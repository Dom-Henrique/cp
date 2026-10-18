#include <bits/stdc++.h>
using namespace std;
/*
string1 > string2 = 1
string2 > string1 = -1
strings iguais = 0
mesmo que tenham mesmo tamanho, preciso verificar os codigos
*/
int petyaString(string str1, string str2)
{
    for (char &c : str1){
        c = tolower(c);
    }
    for (char &c : str2){
        c = tolower(c);
    }
    int code1 = 0, code2 = 0;
    for (char c : str1)
    {
        code1 += (int)c;
    }
    for (char c : str2)
    {
        code2 += (int)c;
    }
    if (code1 > code2)
        return 1;
    if (code1 < code2)
        return -1;
    return 0;
}
int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    // tolower(str1)
    cout << petyaString(str1, str2) << endl;
}