#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        reverse(str.begin(), str.end());
        string str2;
        for (char c : str) {
            if (c == 'p') {
                str2 += 'q';
            } else if (c == 'q') {
                str2 += 'p';
            } else {
                str2 += c;
            }
        }
        cout << str2 << "\n";
    }
    return 0;
}
