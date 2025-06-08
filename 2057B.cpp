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
	int n, k; cin >> n >> k;
	int a[n]; map<int, int> f;
	FOR(i, n){
		cin >> a[i];
		f[a[i]] += 1;
	} 

	ll ans(0);

	vector<pi> key_sort(f.begin(), f.end());
	sort(key_sort.begin(), key_sort.end(), [](const pi &a, const pi &b){
		return a.second < b. second;
	});

	for(pi x: key_sort){
		if(k){
			int transfer = min(k, x.second);
			f[x.first]-=transfer;
			f[key_sort.back().first]+=transfer;
			k-=transfer;
		}else{
			break;
		}
	}

	for(pi x: f){
		if(x.second){
			ans++;
		}	
	}

	cout << ans;
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