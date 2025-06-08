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


bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
int nearest_prime(int n) {
    int prime = 0;
    for (int i = n-1; i >= 2; i--) {
        if (is_prime(i)) {
            prime = i;
            break;
        }
    }
    return prime;
}

int main() 
{ 
	ios::sync_with_stdio(0); 
	cin.tie(0); 

	int t; cin >> t;
	while(t--){
		int h; cin >> h;
		int tempprime = nearest_prime(h);
		h = h - tempprime;
		bool x = true;
		int math = pow(2,0);
		int i = 0;
		int count(1);
		while(x){
			math = pow(2,i)-1;
			i++;
			count++;
			if(math == h){
				h = h - math;
				// count++;
				break;
			}	
		}
		if(count==1){
			cout << "1" << endl;
			break;
		}
		cout << count-1 << endl;

	}

	return 0; 
} 
