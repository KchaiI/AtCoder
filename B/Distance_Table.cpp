#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(size_t i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> distance(n);
    rep(i, n - 1) cin >> distance[i];
    
    rep(i, n - 1) {
        int size = 0;
        rep(j, n - 1 - i) {
            size += distance[j + i];
            cout << size << " ";
        }
        cout << endl;
    }
}