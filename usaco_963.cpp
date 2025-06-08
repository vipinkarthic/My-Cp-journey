#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(){    
    int K, N;
    cin >> K >> N;
    
    vector<vector<int>> rankings(K, vector<int>(N));
    for (int i = 0; i < K; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> rankings[i][j];
        }
    }
    
    int consistentPairs = 0;
    
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            bool iBeatsJ = true, jBeatsI = true;
            
            for (int session = 0; session < K; ++session) {
                int posI = find(rankings[session].begin(), rankings[session].end(), i) - rankings[session].begin();
                int posJ = find(rankings[session].begin(), rankings[session].end(), j) - rankings[session].begin();
                
                if (posI > posJ) {
                    iBeatsJ = false;
                }
                if (posJ > posI) {
                    jBeatsI = false;
                }
            }
            
            if (iBeatsJ || jBeatsI) {
                consistentPairs++;
            }
        }
    }
    
    cout << consistentPairs << endl;
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	(void)!freopen("gymnastics.in", "r", stdin);
	(void)!freopen("gymnastics.out", "w", stdout);

	int t = 1;
	while(t--){
		solve();
	}

	return 0;
}