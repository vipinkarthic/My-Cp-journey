#include<bits/stdc++.h>

using namespace std;

int main() {
        int t; cin >> t;
        while(t--){
        int rows, cols;
        rows = 3;
        cols = 3;
        vector<vector<char>> arr(rows, vector<char>(cols));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> arr[i][j];
            }
        }
        int row = -1, col = -1;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (arr[i][j] == '?') {
                    row = i;
                    col = j;
                    break;
                }
            }
            if (row != -1) break;
        }

        set<char> x = {'A', 'B', 'C'};
        set<char> pc = x;
        for (int i = 0; i < rows; i++) {
            pc.erase(arr[row][i]);
            pc.erase(arr[i][col]);
        }

        if (pc.size() == 1) {
            cout << *pc.begin() << endl;


    }
}
}