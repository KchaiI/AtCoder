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
        int a = query[i] - 1;
        int check = mass[a];
        
        mass[a] ^= 1;
        cout << count << endl;
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, q;
//     cin >> n >> q;
//     vector<int> mass(n, 0);  // 0: 白, 1: 黒
//     vector<int> query(q);
//     for (int i = 0; i < q; ++i) cin >> query[i];

//     int black_segments = 0;

//     auto is_black = [&](int i) -> bool {
//         return i >= 0 && i < n && mass[i] == 1;
//     };

//     for (int i = 0; i < q; ++i) {
//         int a = query[i] - 1;

//         // 反転前の処理：mass[a] を切り離す
//         if (mass[a] == 1) {
//             // 黒 → 白 になるので区間が減る可能性
//             if (!is_black(a - 1) && !is_black(a + 1)) {
//                 black_segments -= 1;
//             } else if (is_black(a - 1) && is_black(a + 1)) {
//                 black_segments += 1;
//             }
//         } else {
//             // 白 → 黒 になるので区間が増える可能性
//             if (!is_black(a - 1) && !is_black(a + 1)) {
//                 black_segments += 1;
//             } else if (is_black(a - 1) && is_black(a + 1)) {
//                 black_segments -= 1;
//             }
//         }

//         // 反転
//         mass[a] ^= 1;

//         // 出力
//         cout << black_segments << '\n';
//     }
//     return 0;
// }
