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

    // int position[N];
    // position[0] = 0;
    // for(int i = 1;i < N;i++) {
    //     position[i] = (position[i - 1] + d_i[i - 1]) % L;
    // }

    // for(int i = 0; i < N;i++) {
    //     cout << position[i] << endl;
    // }

    // int count = 0;
    // int gap = L / 3;
    // for(int a = 0; a < N - 2;a++) {
    //     for(int b = a + 1; b < N - 1;b++) {
    //         for(int c = b + 1; c < N; c++) {
    //             if((position[b] - position[a] + L) == gap && (position[c] - position[b] + L) == gap && (position[a] - position[c] + L) == gap) {
    //                 count++;
    //             }
    //         }
    //     }
    // }
vector<int> d(N - 1);
vector<int> pos(N);
    pos[0] = 0;
    for (int i = 1; i < N; i++) {
        pos[i] = (pos[i - 1] + d[i - 1]) % L;
    }

    // L が3で割れなければ正三角形は作れない
    if (L % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    int gap = L / 3;

    // 各点の位置を set に入れる
    unordered_set<int> pointset(pos.begin(), pos.end());

    int count = 0;
    for (int i = 0; i < N; i++) {
        int a = pos[i];
        int b = (a + gap) % L;
        int c = (a + 2 * gap) % L;

        // 並び順に関係なく3点とも存在すればOK
        if (pointset.count(b) && pointset.count(c)) {
            // a, b, c の最小値だけ数えるようにすることで重複を防ぐ
            vector<int> triangle = {a, b, c};
            sort(triangle.begin(), triangle.end());
            if (a == triangle[0]) {
                count++;
            }
        }
    }

    cout << count << endl;
}