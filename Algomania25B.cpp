#include<bits/stdc++.h>
using namespace std; 
#define mod (1000000007)
#define INF INT_MAX
#define FOR(a, c) for(int(a) = 0;(a) <(c);(a)++) 
#define FORL(a, b, c) for(int(a) =(b);(a) <=(c);(a)++) 
#define FORR(a, b, c) for(int(a) =(b);(a) >=(c);(a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
typedef vector<char> vc;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

int N(110000);
vi pr_arr(N+1, 1);
vi nearest(N+1, 0);

void primes(){
    FOR(i, 2) pr_arr[i] = false;

    FORL(i, 2, sqrt(N)){
        if(pr_arr[i]){
            FORL(j, i*i, N){
                if(j % i == 0) pr_arr[j] = false;
            }
        }
    }
    
    int x(-1);
    FORR(i, N, 0){
        if(pr_arr[i]){
            x = i;
        }
        nearest[i] = x;
    }
}

void solve(){
	int n; cin >> n;
	cout << nearest[n];
}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	primes();

	int t;
	cin >> t;
	while(t--){
		solve();
		cout << "\n";
	}

	return 0;
}