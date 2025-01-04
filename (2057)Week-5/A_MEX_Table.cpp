#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        long long n,m;
        cin >> n >> m;
        long long ans = max(n,m) +1;
        cout << ans << endl;
    }
    return 0;
}