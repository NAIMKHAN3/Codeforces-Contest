#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int a,b;
        cin >> a >> b;
        if(a== 1 && b == 1){
            cout << 1 << endl;
        }else{
            cout<< b-a << endl;
        }
    }
    return 0;
}