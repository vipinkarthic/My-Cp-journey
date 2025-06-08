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

bool check_k_cards(map<int, int> cards, int k){
	FOR(i, 101){
		if(cards[i] >= k){
			return true;
		}	
	}
	return false;
}

void solve(){
	int n; int k;
	cin >> n >> k;
	map <int, int> cards;

	FOR(i, 101){
		cards[i] = 0;
	}

	FOR(i,n){
		int temp; cin >> temp;
		cards[temp] += 1;
	}

	if(check_k_cards(cards, k)){
		cout << k-1;
	}else{
		cout << n;
	}
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