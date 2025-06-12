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

    int position[N];
    position[0] = 0;
    for(int i = 1;i < N;i++) {
        position[i] = (position[i - 1] + d_i[i - 1]) % L;
    }

    for(int i = 0; i < N;i++) {
        cout << position[i] << endl;
    }

    int count = 0;
    int gap = L / 3;
    for(int a = 0; a < N - 2;a++) {
        for(int b = a + 1; b < N - 1;b++) {
            for(int c = b + 1; c < N; c++) {
                if((position[b] - position[a] + L) == gap && (position[c] - position[b] + L) == gap && (position[a] - position[c] + L) == gap) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}