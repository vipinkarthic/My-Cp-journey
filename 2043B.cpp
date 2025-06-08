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
    ll n, d; cin >> n >> d;
    FOR(i, 10){
        if(i==1){
            cout << 1 << " ";
        }
        if(i==3){
            if(n>=3 || d%3==0){
                cout << 3 << " ";
            }
        }
        if(i==5){
            if(d==5) cout << 5 << " ";
        }
        if(i==7){
            if(n>=3 || d%7==0) cout << 7 << " ";
        }
        if(i==9){
            if(n<3){
                if(d%9==0) cout << 9;
            }else if(n>=3 && n <=5){
                if(d == 9 || d == 3 || d == 6) cout << 9;
            }else{
                cout << 9;
            }
        }
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