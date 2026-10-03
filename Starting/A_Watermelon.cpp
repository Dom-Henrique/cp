#include <bits/stdc++.h>
using namespace std;

/*
melancia de w quilos. ela so pode ser comida pelos amigos se puder ser dividida em tuas partes.
as partes devem ter quilos pares.
*/
string isDivisible(int w){
    if (w % 2 == 0 && w > 2) return "YES";
    return "NO";
}
int main()
{
    int w;
    cin >> w;
    cout << isDivisible(w);
}