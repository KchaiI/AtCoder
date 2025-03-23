#include <bits/stdc++.h>
using namespace std;

int main() {
    int h = 0, w = 0;
    cin >> h >> w;
    vector<vector<int>> stage(h, vector<int>(w));
    
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            char n;
            cin >> n;
            if(n == '#') {
                stage.at(i).at(j + 1)++;
                stage.at(i).at(j - 1)++;
                stage.at(i - 1).at(j - 1);
                stage.at(i - 1).at(j);
                stage.at(i - 1).at(j + 1);
                stage.at(i + 1).at(j - 1);
                stage.at(i + 1).at(j);
                stage.at(i + 1).at(j + 1);
            }
        }
    }
}