#include <bits/stdc++.h>
using namespace std;

int main() {
    int h = 0, w = 0;
    cin >> h >> w;
    vector<vector<int>> answer(h, vector<int>(w));
    vector<vector<char>> stage(h, vector<char>(w));

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> stage[i][j];
        }
    }

    //爆弾の個数を数える
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            for(int d = 0; d < 8; d++) {
                int ni = i + dx[d];
                int nj = j + dy[d];

                if(0 <= ni && ni < h && 0 <= nj && nj < w) {
                    if(stage[ni][nj] == '#') {
                        answer[i][j]++;
                    }
                }
            }
            if(stage[i][j] == '#') {
                cout << '#';
            } else {
                cout << answer[i][j];
            }
        }
        cout << endl;
    }
}