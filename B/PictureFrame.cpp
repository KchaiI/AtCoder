#include <bits/stdc++.h>
using namespace std;

int main() {
    int h = 0, w = 0;
    cin >> h >> w;
    vector<vector<char>> inside(h, vector<char>(w));

    for(int i = 0; i << h; i++) {
        for(int j = 0; j << w; j++) {
            char n;
            cin >> n;
            inside.at(i).at(j) = n;
        }
    }

    cout << inside << endl;
}