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
	int n;
	cin >> n;

	vector<int> heights(n);
	FOR(i, n) {
		cin >> heights[i];
	}

	int minDiff = INT_MAX, idx1 = -1, idx2 = -1;

	for (int i = 1; i < n; ++i) {
		if (abs(heights[i] - heights[i - 1]) < minDiff) {
			minDiff = abs(heights[i] - heights[i - 1]);
			idx1 = i;
			idx2 = i + 1;
		}
	}

	if (abs(heights[0] - heights[n - 1]) < minDiff) {
		idx1 = n;
		idx2 = 1;
	}

	cout << idx1 << ' ' << idx2;

	return 0;
} 
