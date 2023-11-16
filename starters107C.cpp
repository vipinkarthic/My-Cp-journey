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

	ll t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string chef;
		string chefina;
		cin >> chef;
		cin >> chefina;
		ll  cp(0);
		ll  inp(0);
		for(int i=0;i<n;i++){
			if(chef[i] == 'R'){
				if(chefina[i] == 'S'){
					cp++;
				}
				if(chefina[i] == 'P'){
					inp++;
				}
			}
			if(chef[i] == 'P'){
				if(chefina[i] == 'R'){
					cp++;
				}
				if(chefina[i] == 'S'){
					inp++;
				}

			}
			if(chef[i] == 'S'){
				if(chefina[i] == 'P'){
					cp++;
				}
				if(chefina[i] == 'R'){
					inp++;
				}
			}
		}

if(cp>inp){
			cout << "0" << endl;
		}else if(cp == inp){
			cout << "1" << endl;
		}else if(cp<inp){
			if(inp - cp > 1){
				if(inp%2 !=0 || cp%2!=0){
				cout << inp-cp-1 << endl;
			}else{
				cout << inp-cp << endl;
			}
		}else{
			cout << inp-cp << endl;
			
		}
		}

	}

	return 0; 
} 
