#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++) 
#define FORL(a, b, c) for (int(a) = (b); (a) < (c); (a)++) 
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

	int t;
	cin >> t;
	while(t--){
		int ichar(0);
		int jchar(0);
		int n; cin >> n;
		int arr[n];
		int maincheck(0);
		vector<int> v;
		FOR(i,n){
			if(i%2 == 0){
				v.push_back(2);
			}else if(i%3 == 0){
				v.push_back(3);
			}else{
				v.push_back(1);
			}
		}
		//getting a
		FOR(i,n){
			cin >> arr[i];
		}

		FOR(i,n){
			int breakcheck = 0;
			FORL(j,i+1,n){
				if(arr[i] == arr[j]){
					breakcheck = 1;
					ichar = i;
					jchar = j;
					maincheck = 1;
					break;
				}
			}
			if(breakcheck == 1){
				break;
			}	
		}

		if(maincheck != 1){
			FOR(i,n){
				cout << v[i] << " ";
			}
		}else{
			cout << "-1" << endl;
		}
		cout << endl;


	}

	return 0; 
} 
