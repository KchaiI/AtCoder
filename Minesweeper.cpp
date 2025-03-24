#include <bits/stdc++.h>
using namespace std;

int main() {
    int h = 0, w = 0;
    cin >> h >> w;
    vector<vector<int>> data(3, vector<int>(4));
    
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            vector<vector<int>> stage(h, vector<int>(w));
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

    cout << stage << endl;
}