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
	vi order(n);
	FOR(i, n) cin >> order[i];

	int i(2), depth_length(1);
	vi length;

	while(i < n){
		if(order[i-1] < order[i]){
			depth_length++;
		}else{
			length.PB(depth_length);
			depth_length = 1;
		}
		i++;
	}
	length.PB(depth_length);

	int child = length.size();
	vi dpts(child, 0);
	queue<int> q;
	i = 0;

	dpts[i] = 1; 
	q.push(i);
	i++;

	while(!q.empty()){
		int c = q.front();
		q.pop();
		int cc = length[c];

		FOR(j, cc){
			if(i >= child) break;
			dpts[i] = dpts[c]+1;
			q.push(i);
			i++;
		}

	}

	cout << dpts.back();

}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}