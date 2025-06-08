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
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll ski[n],mo[n],go[n];
		FOR(i,n) cin >>ski[i];
		FOR(i,n) cin >>mo[i];
		FOR(i,n) cin >>go[i];
		int count = 3;
		int x(0),y(0),z(0);
		ll ans = 0;
		while(count--){
			auto initialx = max_element(ski,ski+n);
			auto initialy = max_element(mo,mo+n);
			auto initialz = max_element(go,go+n);
			auto ini = ski;
			auto indexx = distance(ski, initialx);
			auto iniy = mo;
			auto indexy = distance(mo, initialy);
			auto iniz = go;
			auto indexz = distance(go, initialz);
			int tempx = *max_element(ski, ski + n);
			int tempy = *max_element(mo, mo + n);
			int tempz = *max_element(go, go + n);
			int secondLargestX = *max_element(ski, ski + n, [tempx](int a, int b) {
			    return a != tempx && (b != tempx || a > b);
			});
			int secondLargestY = *max_element(mo, mo + n, [tempy](int a, int b) {
			    return a != tempy && (b != tempy || a > b);
			});
			int secondLargestZ = *max_element(go, go + n, [tempz](int a, int b) {
			    return a != tempz && (b != tempz || a > b);
			});
			cout << "max elements are : " << secondLargestX << " " << secondLargestY << " " << secondLargestZ << " " << endl;
			if(*initialx >= *initialy && *initialx >= *initialz && secondLargestX >= secondLargestY && secondLargestX >= secondLargestZ){
				ans += *initialx;
                fill(ski, ski + n, 0);
				mo[indexx] = 0;
				go[indexx] = 0;

				// cout << indexx << "x " <<endl;
				continue;
			}else if(*initialy >= *initialx && *initialy >= *initialz && secondLargestY >= secondLargestX && secondLargestY >= secondLargestZ){
				ans += *initialy;
                fill(mo, mo + n, 0);
				ski[indexy] = 0;
				go[indexy] = 0;
				// cout << indexy << "y " <<endl;
				continue;
			}else if(*initialz >= *initialy && *initialz >= *initialx && secondLargestZ >= secondLargestY && secondLargestZ >= secondLargestX){
				ans += *initialz;
                fill(go, go + n, 0);
				ski[indexz] = 0;
				go[indexz] = 0;
				// cout << indexz << "z " <<endl;
				continue;
			}
		}	
		cout << ans << endl;
	}

	return 0; 
} 
