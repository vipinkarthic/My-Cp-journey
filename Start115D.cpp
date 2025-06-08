#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 

    int t; 
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;

        if (x >= 2 * n || (x >= n && y >= 3 * n)) {
            cout << "YES" << endl;
        } else {
            // int smallor = n * 3;
            // int largeor = n * 1;
            // int largeor2 = n * 2;
            n = n - floor(y / 3);
            x = x - floor(y / 3);

            // cout << n << " " << x << endl;

            if (x >= 2 * n && n>=0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0; 
} 
