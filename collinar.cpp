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
	int x1,x2,x3,y1,y2,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	if((x1 == x2 and x2 == x3 )|| (y1 == y2 and y2 == y3)){
		cout << "Yes" << endl;
		cout << "The points lie on a straight line";
		return;
	}

	cout << "No" << endl;
	cout << "The points do not lie on a straight line";


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