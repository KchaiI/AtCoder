#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    for(int i = 0; i < N; i++) {
        int brack_board;
        cin >> brack_board;
        int box = brack_board;
        if(box % 2 == 0) {
            count++;
            box = box / 2;
        } else {
            break;
        }



        // for(int j = 0; j < brack_board; j++) {
        //     int box = brack_board;
        //     if(box % 2 == 0) {
        //         count ++;
        //         box = box / 2;
        //         cout << box;
        //     }else {
        //         break;
        //     }
        // }
    }
}