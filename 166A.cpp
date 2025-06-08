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
	int n, k; cin >> n >> k; k--;
	vector<pi> standings;

	FOR(i, n){
		int problems, time;
		cin >> problems >> time;
		pi temp;
		temp.first = problems;
		temp.second = time;
		standings.PB(temp);
	}

    sort(standings.begin(), standings.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        } else {
            return a.first > b.first;
        }
    });

    int count = 1;
    int left = k - 1, right = k + 1;

    while (left >= 0 && standings[k].first == standings[left].first && standings[k].second == standings[left].second) {
        count++;
        left--;
    }
    while (right < n && standings[k].first == standings[right].first && standings[k].second == standings[right].second) {
        count++;
        right++;
    }

    cout << count;

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