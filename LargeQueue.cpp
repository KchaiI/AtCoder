#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int q;
    cin >> q;
    vector<int> a;
    vector<int> count_num;
    rep(i, q) {
        int check;
        cin >> check;
        if(check == 1) {
            int c, x;
            cin >> c >> x;
            rep(i, c) {
                a.push_back(x);
            }
        } else if(check == 2) {
            int k;
            int count = 0;
            cin >> k;
            rep(i, k) {
                count += a[i];
            }
            count_num.push_back(count);
            a.erase(a.begin(), a.begin() + k);
        }
    }

    rep(i, count_num.size()) {
        cout << count_num[i] << endl;
    }
}