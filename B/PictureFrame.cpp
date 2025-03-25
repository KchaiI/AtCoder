#include <bits/stdc++.h>
using namespace std;

int main() {
    int h = 0, w = 0;
    cin >> h >> w;
    vector<vector<char>> inside(h, vector<char>(w));

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cin >> inside[i][j];
        }
    }

    for(int i = 0; i < w + 2; i++){
        cout << '#';
    }
    cout << endl;

    for(int i = 0; i < h; i++) {
        cout << '#';
        for(int j = 0; j < w; j++) {
            cout << inside[i][j];
        }
        cout << '#' << endl;
    }
    
    for(int i = 0; i < w + 2; i++){
        cout << '#';
    }
    cout << endl;
}