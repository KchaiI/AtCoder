#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(size_t i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> query(q);
    rep(i, q) cin >> query[i];

    vector<int> mass(n);
    int count = 0;
    rep(i, q) {
        mass[query[i] - 1] ^= 1;
        int a = mass[query[i] - 2] + mass[query[i] - 1] + mass[query[i]];
        if(query[i] != 1 || query[i] != n) {
            if(a == 0 || a == 3) {
                count -= 1;
            } else if(a == 1) {
                count += 1;
            }
        } else if(query[i] == 1) {
            if(mass[0] == 1 && mass[1] == 0) {
                count += 1;
            }
        } else {
            if(mass[n - 1] == 1 && mass[n - 2] == 0) {
                count += 1;
            }
        }
        cout << count << endl;
    }
}