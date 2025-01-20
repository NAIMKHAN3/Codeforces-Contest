#include <bits/stdc++.h>
using namespace std;

int getPoints(vector<int> &sorted)
{
    
    long long s = 0, points = 0;

    for (int num : sorted)
    {
        s += num;
        if (s % 2 == 0)
        {
            points++;
            while (s % 2 == 0)
            {
                s /= 2;
            }
        }
    }
    return points;
}

void solved()
{
    int n;
    cin >> n;

   
    vector<int> even, odd;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            even.push_back(x);
        }else{
            odd.push_back(x);
        }
    }
   vector<int> sorted = even;
    sorted.insert(sorted.end(), odd.begin(), odd.end());

    cout << getPoints(sorted) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solved();
    }

    return 0;
}
