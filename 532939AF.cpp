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
	int n; cin >> n;
	int arr[n];

	FOR(i, n){
		cin >> arr[i];
	}

	int highestdiff = 0;
	int left = 0;
	int M = arr[0];
	int m = M;

	FORL(right, 1, n-1){
		M = max(M, arr[right]); m = min(m, arr[right]);
		while(M-m > 1){
            left++;
            if (left <= right) {
                M = *max_element(arr + left, arr + right + 1);
                m = *min_element(arr + left, arr + right + 1);
            }
        }
        highestdiff = max(highestdiff, right - left + 1);
    }

	cout << highestdiff;

}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t = 1;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}