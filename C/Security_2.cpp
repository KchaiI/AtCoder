#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(size_t i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int s;
    cin >> s;

    vector<int> s_vec;
    while(s > 0) {
        s_vec.push_back(s % 10);
        s /= 10;
    }
    reverse(s_vec.begin(), s_vec.end());

    int count = 1;
    int now_pos = 0;
    rep(i, s_vec.size()) {
        if(s_vec[i] <= s_vec[i + 1]) {
            count += 1 + abs(s_vec[i + 1] - now_pos);
            now_pos = s_vec[i + 1];
        } else {
            count += 1 + abs((s_vec[i] - s_vec[i + 1]) - now_pos);
            now_pos = s_vec[i] - s_vec[i + 1];
        }
    }

    cout << count << endl;
    return 0;

    
}