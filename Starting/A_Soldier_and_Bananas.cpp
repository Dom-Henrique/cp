#include <bits/stdc++.h>
using namespace std;
/*
w bananas. vai pagar k dolares pela primeira banana.
vai multiplicando k pela quantidade.
*/
int resolution(int k, int n, int w)
{
    int price = 0;
    for (int i = 1; i <= w; i++)
    {
        price += k * i;
    }
    if (price < n)
        return 0;
    int borrow = abs(price-n);
    return borrow;
}
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    cout << resolution(k, n, w) << endl;
}