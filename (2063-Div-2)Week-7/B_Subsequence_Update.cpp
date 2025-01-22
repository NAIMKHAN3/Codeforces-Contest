#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
    while (t--) {
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> v(n);
 
 
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        long long range = r - l + 1;
 
 
        r = min(r, n);
 
        l = max(l, 1LL);
        long long start = l - 1;
 
 
        range = min(range, r);
        range = min(range, n - start);
 
        vector<long long> left, right;
 
 
        for (long long i = 0; i < r; i++) {
            left.push_back(v[i]);
        }
 
 
        for (long long i = start; i < n; i++) {
            right.push_back(v[i]);
        }
 
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
 
 
        long long leftSum = 0, rightSum = 0;
        for (long long i = 0; i < range; i++) {
            if (i < left.size()) {
                leftSum += left[i];
            }
            if (i < right.size()) {
                rightSum += right[i];
            }
        }
 
 
        cout << min(leftSum, rightSum) << "\n";
    }
 
    return 0;
}

