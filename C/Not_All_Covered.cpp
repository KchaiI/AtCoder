// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for(int i = 0; i < (n); ++i)
// using ll = long long;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     int houdai[M][2];
//     for(int i = 0; i < M; i++) {
//         cin >> houdai[i][0] >> houdai[i][1];
//     }

//     int count[N + 1] = {0};
//     for(int i = 0; i < M; i++) {
//         count[houdai[i][0]] ++;
//         count[houdai[i][1] + 1] --;
//     }
//     int ruiseki[N + 1] = {0};
//     ruiseki[0] = count[0];
//     for(int i = 0; i < N; i++) {
//         ruiseki[i + 1] += ruiseki[i] + count[i];
//     }

//     // int min_number = *min_element(count, count + N);
//     // cout << min_number << endl;


// }


// 解説見てから
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    // 差分計算するために、城の範囲+1の配列。差分配列
    vector<int> s(n + 1);
    rep(i, m) {
        // 砲台が守る範囲
        int from, to;
        cin >> from >> to;
        // 守りはじめのところに+1、守り終わりの次のところに-1
        from--;
        s[from]++; s[to]--;
    }

    // 累積和
    rep(i, n) s[i + 1] += s[i];

    int ans = *min_element(s.begin(), s.begin() + n);
    cout << ans << endl;
    return 0;
}