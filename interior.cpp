#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

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
    int x1, y1, x2, y2, x3, y3; 
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int area = abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));

    int edge_pts = __gcd(abs(x2 - x1), abs(y2 - y1)) + __gcd(abs(x3 - x2), abs(y3 - y2)) + __gcd(abs(x1 - x3), abs(y1 - y3));

    cout << ((area - edge_pts) + 2 ) / 2;

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