#include<bits/stdc++.h>
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7
#define INF INT_MAX
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++) 
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--) 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
typedef vector<string> vs;
#define PB push_back 
#define POB pop_back 
#define MP make_pair 

void solve(int number[][5], int a, int b){
	int sum[5][5] = {0} ; 
	sum[0][0] = number[0][0];

	FORL(i, 0, 4){
		bool is;
		if(i == 0){
			is = 1;
		}else{
			is = 0;
		}
		FORL(j, 0, 4){
			if(is){
				if(j==0){
					continue;
				}else{
					sum[i][j] = sum[i][j-1] + number[i][j];					
				}
			}else{
				if(j==0){
					sum[i][j] = sum[i-1][j] + number[i][j];
				}else{
					sum[i][j] = max(sum[i-1][j], sum[i][j-1]) + number[i][j];
				}

			}
		}
	}

    FOR(i, 5) {
        FOR(j, 5) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "FOR THE INDICES " << a << " AND " << b << endl;
	cout << sum[a][b] << endl;

}

int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
	
		int number[5][5];

		FOR(i, 5){
			FOR(j, 5){
				int x;
				cin >> x;
				number[i][j] = x;
			}
		}

		solve(number, 4, 4);
	}

	return 0;
}