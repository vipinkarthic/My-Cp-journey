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

	int zero = 0; 
	int one = 0;
	int x = 1;
	FOR(i, n){
		char temp; cin >> temp;
		arr[i] = temp - '0';

		if(arr[i] == 1){
			one++;
			x = 1;
		}else if(arr[i] == 0 && x != 0){
			zero++;
			x = 0;
		}
	}

	if(one > zero){
		cout << "Yes";
	}else{
		cout << "No";
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