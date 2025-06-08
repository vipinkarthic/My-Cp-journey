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

int closestmultiple(int n, int x) 
{ 
	if(x>n) 
	return x; 

	n = n + x/2; 
	n = n - (n%x); 
	return n; 
} 

int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int r;cin >> r;
	int x,y;cin >> x >> y;
	int new_x,new_y; cin >> new_x >> new_y;
	int distance_x = abs(new_x-x);
	int distance_y = abs(new_y-y);
	int final_distance_first = sqrt(pow(distance_x,2)+pow(distance_y,2));
	if(final_distance_first == 0){
		cout << 0;
		return 0;
	}
	if(final_distance_first<r){
		cout << 1 << endl;
		return 0;
	}
	if(final_distance_first%r>0){
		int final_distance = (final_distance_first + (r-(final_distance_first%r)))/r;
		cout << final_distance - 1 << endl;
		return 0;
	}
	cout << final_distance_first/r - 1 << endl;
	return 0; 
} 
