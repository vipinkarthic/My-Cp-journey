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
	vector<ll> h(n);
	FOR(i, n){
		cin >> h[i];
	}	

	stack<int> s;
	vector<ll> area(n, 0);

	FOR(i, n){
		while(!s.empty() && h[s.top()] >= h[i]) s.pop();
		area[i] += h[i] * (i - (s.empty() ? -1 : s.top()));
		s.push(i); 
	}

	while(!s.empty()) s.pop();

	FORR(i, n-1, 0){
		while(!s.empty() && h[s.top()] >= h[i]) s.pop();
		area[i] += h[i] * (((s.empty() ? n : s.top()) - i) - 1);
		s.push(i); 
	}

	sort(area.begin(), area.end());
	cout << area[n-1];



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