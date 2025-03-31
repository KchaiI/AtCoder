#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, m = 0;       // カードの枚数
    string si[n], ti[m];    // カードの文字入力

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> si[i];
    }

    cin >> m;
    for(int j = 0; j < m; j++) {
        cin >> ti[m];
    }

    for(int i = 0; i < n; i++) {
        int n = 0, red_card_count = 0, blue_card_count = 0;
        for(int j = 0; j < m; j++) {
            if(si[i] == si[i + n]) {
                red_card_count++;
            }

            if(ti[m] == ti[m + n]) {
                blue_card_count++;
            }
            n++;

            if(red_card_count > blue_card_count)
        }
    }
}

同じ文字列のカードの枚数を数えていく、
比較してプラスになれば記憶