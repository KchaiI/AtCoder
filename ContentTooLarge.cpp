#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(size_t i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    if(sum <= m) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}