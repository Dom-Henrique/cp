#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n = 0;
    cin >> t;
    string op;
    for (int i = 0; i < t; i++)
    {
        cin >> op;
        if (op == "X++" || op == "++X")
            n++;
        else if (op == "X--" || op == "--X")
            n--;
    }
    cout << n << endl;
}