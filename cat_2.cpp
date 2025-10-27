#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) {
        cin >> s[i];
    }

    vector<string> number(n * (n - 1));
    rep(i, n) {
        rep(j, n) {
            if(i != j) {
                number(i * j) = s[i] + s[j];
            }
        }
    }

    int count = 0;
    rep(i, n * (n - 1)) {
        if(number[i] == number[i + 1]) {
            count ++;
        }
    }

    cout << count << endl;
}