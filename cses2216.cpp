#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000000 + 7;


int main() {
    int n; cin >> n;
    int f = 0, t[5050], d[5050][5050];

    for (int i = 0; i < n; ++i) {
        char c; cin >> c;
        t[i] = c == 'f' ? 0 : 1; 
    }

    d[0][0] = 1;

    if (t[0] == 0) f = 1;

    for (int i = 1; i < n; ++i) {
        if (t[i - 1] == 0) {
            for (int j = f; j > 0; --j) {
                d[i][j] = d[i-1][j-1];
            }
        } else {
            for (int j = f; j >= 0; --j) {
                d[i][j] = (d[i][j + 1] + d[i-1][j])%MOD;
            }
        }
        if (t[i] == 0) f++;
    }  

    int sum = 0;

    for(int i = 0; i <= f; i++){
        sum = (sum + d[n-1][i])%MOD;
    }
    
    cout << sum;
}