#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    // cout << ceil((n * m) / pow(a, 2)) << endl;
    n = ceil(n / a) + (n % a != 0);
    m = ceil(m / a) + (m % a != 0);
    int result = m * n;
    /*
    it's necessary to verify if the number of square are covering above
    rectangle size (n*m)
    */
    cout << result << endl;
}