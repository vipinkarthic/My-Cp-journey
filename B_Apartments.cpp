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
	int count(1);
	int z = m;
	int first_pointer = given_app_size[0];
	int second_pointer = given_app_size[m-1];
	int j(0);
	int i(0);
	while(i<n && j<m){
		if(des_app_size[i]-k>given_app_size[j]){
			j++;
		}else if(des_app_size[i]+k<given_app_size[j]){
			i++;
		}else{
			i++;
			count++;
			j++;
		}
	}

	cout << count-1 << endl;

	return 0; 
} 
