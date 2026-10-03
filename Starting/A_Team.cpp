#include <bits/stdc++.h>
using namespace std;

/*
se pelo menos duas souberem fazer, irao enfrentar.
1 = sabem | 0 = nao sabem
*/
int main()
{
    int t, qtd = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> a(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> a[j];
        }
        qtd += count(a.begin(), a.end(), 1) >= 2;
    }
    cout << qtd << endl;
}