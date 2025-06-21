#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(size_t i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string p;
    int l, p_size;
    cin >> p;
    cin >>l;

    p_size = p.length();
    if(p_size >= l) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}