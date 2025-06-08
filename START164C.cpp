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
    int n, l, r; 
    cin >> n >> l >> r;
    int nums[n];
    map<int, int> freq;
    __int128 fa = 1;
    FOR(i, n){
        cin >> nums[i];
        freq[nums[i]]++;
        if(freq[nums[i]]>1){
            if(l<=0 && 0<=r){
                cout << "YES";
                return;
            } else{
                cout << "NO";
                return;
            }
        }
    }

    if(n<9){
        FOR(i, n){
            FORL(j, i+1, n-1){
                ll temp = nums[i]^nums[j];
                fa *= temp;
            }
        }
    }else{
    	cout << "NO";
    	return;
    }


    if (l <= fa && fa <= r){
        cout << "YES";
    } else{
        cout << "NO";
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