#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long A = min(a, m);
        long long B = min(b, m);

        long long seats = max(0LL, m - A) + max(0LL, m - B);

        long long C = min(c, seats);

        cout << A + B + C << "\n";
    }
    return 0;
}
