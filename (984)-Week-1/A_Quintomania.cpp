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
        int n;
        cin >> n;
        vector<int> v(n);
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int x = v[i] - v[i + 1];
                if(x !=5 && x != 7){
                    ans = false;
                    break;
                }
            }
            else if (v[i] < v[i + 1])
            {
                int x = v[i + 1] - v[i];
                if(x !=5 && x != 7){
                    ans = false;
                    break;
                }
            }
            else
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}