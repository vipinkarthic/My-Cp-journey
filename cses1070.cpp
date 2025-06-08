#include<bits/stdc++.h>
using namespace std;

#define mod 1e9 + 7
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

void solve(int n){
    if(n == 2 || n==3){
        cout << "NO SOLUTION" << endl;
    }else if(n==4){
    	cout << "2 4 1 3 ";
    }else {
        vi odd;
        vi even;
        for(int i = 1; i <= n; i++){
            if(i % 2 == 1) odd.PB(i);
            if(i % 2 == 0) even.PB(i);
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        int even_size = even.size();
        for(int i = 0; i < even_size; i++){
            odd.PB(even[i]);
        }

        for(int x : odd){
            cout << x << " ";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    solve(t);

    return 0;
}
