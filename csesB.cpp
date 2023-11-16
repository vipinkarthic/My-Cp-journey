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

	int n,m,k; cin >> n >> m >> k;
	int des_app_size[n];
	int given_app_size[m];
	FOR(i,n){
		cin >> des_app_size[i];
	}
	FOR(i,m){
		cin >> given_app_size[i];
	}

	sort(des_app_size, des_app_size+n);
	sort(given_app_size, given_app_size+m);
	int count(0);
	int z = m;
	FORL(i,1,n){
		if(des_app_size[i] == des_app_size[i-1]){
			continue;
		}else{
			cout << "this is middle of lower upper " << des_app_size[i-1] << " " << i-1 << endl;
			int lower = abs(des_app_size[i-1] - k);
			int upper = abs(des_app_size[i-1] + k);
			int temp = 0;
			m = z;
			cout << "lower : " << lower << " " << "upper : " << upper << endl;
			while(temp < m){
				cout << "VALUE OF M : " << m  << " AND VALUE OF TEMP : " << temp << endl;
				int mid = (given_app_size[temp]+given_app_size[m-1])/2;
				cout << "This is mid again : " << mid << " of lower : " << given_app_size[temp] << " and lower : " << given_app_size[m-1] << endl;
				if(lower <= mid && mid <= upper){
					count++;
					cout << count << " - " << "This is count for house  : " << mid << endl;
					break;
				}else if(lower > mid && upper > mid){
					temp = (m/2) + 1;
				}else if(lower < mid && upper < mid){
					m = m/2 + 1;
				}
			}
		}
	}

	cout << count << endl;

	return 0; 
} 
