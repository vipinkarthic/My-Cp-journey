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
    int n, s(1), e(1);
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
        if (a[i] < a[i - 1])
        {
            s = i;
            break;
        }

    for (int i = n - 1; i >= 1; i--)
        if (a[i] < a[i - 1])
        {
            e = i + 1;
            break;
        }

    reverse(a + s - 1, a + e);

    if (is_sorted(a, a + n))
    {
        cout << "yes" << endl;
        cout << s << " " << e << endl;
    }
    else
        cout << "no" << endl;
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