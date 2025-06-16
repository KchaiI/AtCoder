#include <bits/stdc++.h>
using namespace std;

int main() {
    // 初期入力
    int N, L;
    cin >> N >> L;
    int d_i[N];
    for(int i = 0;i < N - 1;i++) {
        cin >> d_i[i];
    }

    // 数字の位置を特定させる
    int position[N];
    position[0] = 0;
    for(int i = 1;i < N;i++) {
        position[i] = (position[i - 1] + d_i[i - 1]) % L;
    }

    // for(int i = 0; i < N;i++) {
    //     cout << position[i] << endl;
    // }

    int count = 0;
    // 点との距離が等しければ正三角形ができる
    int gap = L / 3;
    for(int a = 0; a < N - 2;a++) {
        for(int b = a + 1; b < N - 1;b++) {
            for(int c = b + 1; c < N; c++) {
                vector<int> gapvec = {position[a], position[b], position[c]};
                sort(gapvec.begin(), gapvec.end());
                if((gapvec[1] - gapvec[0]) == gap && (gapvec[2] - gapvec[1]) == gap && (gapvec[0] - gapvec[2] + L) == gap) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}



// 解答例
// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for(int i = 0; i < (n); ++i)
// using ll = long long;

// int main() {
//     int N, L;
//     cin >> N >> L;

//     // 点の位置の管理
//     vector<int> x(N);
//     x[0] = 0;
//     rep(i, N - 1) {
//         int d_i;
//         cin >> d_i;
//         x[i + 1] = (x[i] + d_i) % L;
//     }

//     // 各座標に点が何個あるかを数えていく
//     vector<int> cnt(L);
//     rep(i, N) cnt[x[i]] ++;

//     // 正三角形ができない時
//     if(L / 3 != 0) {
//         cout << 0 << endl;
//         return 0;
//     }

//     int gap = L / 3;
//     ll count = 0;
//     rep(i, N) {
//         int x1 = (x[i] + gap) % L;
//         int x2 = (x1 + gap) % L;
//         count += (ll)cnt[x1] * cnt[x2];
//     }
//     count /= 3;
//     cout << count << endl;
//     return 0;
// }