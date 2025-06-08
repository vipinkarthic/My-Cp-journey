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
	int t, x1, y1, x2, y2;
	cin >> t >> x1 >> y1 >> x2 >> y2;
	string dir; cin >> dir;
	map<char, int> hash;
    for(char ch : dir) {
        hash[ch]++;
    }

	char horizontal, vertical;
	if(x2>x1) horizontal = 'E';
	else if(x2<x1) horizontal = 'W';
	else horizontal = 'X';


	if(y2>y1) vertical = 'N';
	else if(y2<y1) vertical = 'S';
	else vertical = 'X';

	if(hash[horizontal] < abs(x2-x1)){
		cout << "-1"; return;	
	} 
	if(hash[vertical] < abs(y2-y1)){
		cout << "-1"; return;
	}

	ll total_horizontal = abs(x2-x1), total_vertial = abs(y2-y1);
	ll current_horizontal(0), current_vertical(0);
	int i = 0;
	for(char ch : dir){
		i++;
		if(ch == horizontal){
			current_horizontal++;
		}

		if(ch == vertical){
			current_vertical++;
		}

		if(current_vertical >= total_vertial && current_horizontal >= total_horizontal){
			cout << i;
			return;
		}
	}
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