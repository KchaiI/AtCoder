#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int houdai[M][2];
    for(int i = 0; i < M; i++) {
        cin >> houdai[i][0] >> houdai[i][1];
    }

    int count[N] = {0};
    for(int i = 0; i < M; i++) {
        for(int j = 0; j <= (houdai[i][1] - houdai[i][0] + 1); j++) {
            count[houdai[i][1] - j - 1]++;
        }
    }

    int min_number = *min_element(count, count + N);
    cout << min_number << endl;

}