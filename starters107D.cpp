#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        string chef, chefina;
        cin >> chef >> chefina;

        int wins_R = 0, wins_P = 0, wins_S = 0;

        for (int i = 0; i < N; i++) {
            if ((chef[i] == 'R' && chefina[i] == 'S') || 
                (chef[i] == 'S' && chefina[i] == 'P') || 
                (chef[i] == 'P' && chefina[i] == 'R')) {
                if (chef[i] == 'R') wins_R++;
                else if (chef[i] == 'P') wins_P++;
                else wins_S++;
            }
        }

        int max_wins = max({wins_R, wins_P, wins_S});
        int min_rounds = N - max_wins;

        cout << min_rounds-1 << endl;
    }

    return 0;
}
